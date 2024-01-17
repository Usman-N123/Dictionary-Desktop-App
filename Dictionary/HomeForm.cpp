#include "HomeForm.h"
#include"Classes.h"
#include<Windows.h>
#using <System.dll>
#using <System.Windows.Forms.dll>

using namespace DictionaryGUI;

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections;

Dictionary D;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	LoadDictionary(D);


	Application::Run(gcnew HomeForm());

	
	D.SaveDictionary();

	/*LoginForm loginForm;
	loginForm.ShowDialog();*/ //Does same thing as above


	return 0;
}

// This is the function that converts System::String^ to std::string
string  str(String^ s) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	string os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}


Void HomeForm::Search_Bar_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	string text = str(Search_Bar->Text->Trim());
	//string temptext = "";
	if (text != "")
	{
		for (int i = 0; i < text.length(); ++i)
		{
			//if (text[i] < 'a' || text[i] > 'z')
			if(!isalpha(text[i]))
			{
				text.erase(i, 1);
				--i;
			}

		}
	}
	Search_Bar->Text = gcnew String(text.c_str());
	ToLower(text);
		
	

	if (D.search(text) == "\0") {
		//Not Found label
		Searchlabel->Visible = true;
		Searchlabel->Text = "Not Found!";
		Searchlabel->ForeColor = System::Drawing::Color::IndianRed;
		//Meaining
		Headinglabel->Visible = true;
		MeaningtextBox->Visible = true;
		MeaningtextBox->Text = "NA!";
		//Buttons
		Addbutton->Visible = true;
		Updatebutton->Visible = false;
		Deletebutton->Visible = false;
	}
	else {
		//Found label
		Searchlabel->Visible = true;
		Searchlabel->Text = "Word Found!";
		Searchlabel->ForeColor = System::Drawing::Color::Green;
		
		//Meaining
		Headinglabel->Visible = true;
		MeaningtextBox->Text = gcnew String(D.search(text).c_str());
		MeaningtextBox->Visible = true;
		//Buttons
		Addbutton->Visible = false;
		Updatebutton->Visible = true;
		Deletebutton->Visible = true;
	
	}


	string* suggestions = D.SuggestWords(text);

	//Suggestions
	if (suggestions[0] != text)
	{
		if (suggestions[0] == "\0")
			label1->Visible = false;
		else
		{
			label1->Visible = true;
			label1->Text = gcnew String(suggestions[0].c_str());
		}

		if (suggestions[1] == "\0")
			label2->Visible = false;
		else
		{
			label2->Visible = true;
			label2->Text = gcnew String(suggestions[1].c_str());
		}
		if (suggestions[2] == "\0")
			label3->Visible = false;
		else
		{
			label3->Visible = true;
			label3->Text = gcnew String(suggestions[2].c_str());
		}
		if (suggestions[3] == "\0")
			label4->Visible = false;
		else
		{
			label4->Visible = true;
			label4->Text = gcnew String(suggestions[3].c_str());
		}
		if (suggestions[4] == "\0")
			label5->Visible = false;
		else
		{
			label5->Visible = true;
			label5->Text = gcnew String(suggestions[4].c_str());
		}
		if (suggestions[5] == "\0")
			label6->Visible = false;
		else
		{
			label6->Visible = true;
			label6->Text = gcnew String(suggestions[5].c_str());
		}
		if (suggestions[6] == "\0")
			label7->Visible = false;
		else
		{
			label7->Visible = true;
			label7->Text = gcnew String(suggestions[6].c_str());
		}
	}
	else
	{
		if (suggestions[1] == "\0")
			label1->Visible = false;
		else
		{
			label1->Visible = true;
			label1->Text = gcnew String(suggestions[1].c_str());
		}

		if (suggestions[2] == "\0")
			label2->Visible = false;
		else
		{
			label2->Visible = true;
			label2->Text = gcnew String(suggestions[2].c_str());
		}
		if (suggestions[3] == "\0")
			label3->Visible = false;
		else
		{
			label3->Visible = true;
			label3->Text = gcnew String(suggestions[3].c_str());
		}
		if (suggestions[4] == "\0")
			label4->Visible = false;
		else
		{
			label4->Visible = true;
			label4->Text = gcnew String(suggestions[4].c_str());
		}
		if (suggestions[5] == "\0")
			label5->Visible = false;
		else
		{
			label5->Visible = true;
			label5->Text = gcnew String(suggestions[5].c_str());
		}
		if (suggestions[6] == "\0")
			label6->Visible = false;
		else
		{
			label6->Visible = true;
			label6->Text = gcnew String(suggestions[6].c_str());
		}
		if (suggestions[7] == "\0")
			label7->Visible = false;
		else
		{
			label7->Visible = true;
			label7->Text = gcnew String(suggestions[7].c_str());
		}
	}
}


Void HomeForm::Search_Bar_Click(System::Object^ sender, System::EventArgs^ e) {

	//For stack Recent Words
}

Void HomeForm::Addbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	string text = str(Search_Bar->Text->Trim());

	string meaning = str(MeaningtextBox->Text);

	ToLower(text);
	ToLower(meaning);

	//Add to Dictionary
	D.insert(text, meaning);

	MessageBox::Show("Word Added Successfully!");

	//Clear Search Bar
	Search_Bar->Text = "";
	//Clear Meaning Text Box
	MeaningtextBox->Text = "";

}

Void HomeForm::Updatebutton_Click(System::Object^ sender, System::EventArgs^ e) {

	string text = str(Search_Bar->Text->Trim());

	string meaning = str(MeaningtextBox->Text);

	ToLower(text);
	ToLower(meaning);

	//Update Dictionary
	D.UpdateWord(text, meaning);

	MessageBox::Show("Word Updated Successfully!");

	//Clear Search Bar
	Search_Bar->Text = "Type any Word or Phrase";
	//Clear Meaning Text Box
	MeaningtextBox->Text = "Type Meaning";
	MeaningtextBox->Visible = false;

}

Void HomeForm::Deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {


	string text = str(Search_Bar->Text->Trim());

	ToLower(text);

	

	if(D.Delete(text))
		MessageBox::Show("Word Deleted Successfully!");
	else
		MessageBox::Show("Word failed  to delete");

	//Clear Search Bar
	Search_Bar->Text = "Type any Word or Phrase";
	//Clear Meaning Text Box
	MeaningtextBox->Text = "Type Meaning";
	MeaningtextBox->Visible = false;

}
