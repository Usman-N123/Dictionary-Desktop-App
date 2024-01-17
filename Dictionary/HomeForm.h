#pragma once

namespace DictionaryGUI {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeForm
	/// </summary>
	public ref class HomeForm : public System::Windows::Forms::Form
	{
	public:
		HomeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Search_Bar;
	private: System::Windows::Forms::Label^ Searchlabel;
	private: System::Windows::Forms::Label^ Headinglabel;


	private: System::Windows::Forms::Button^ Addbutton;
	private: System::Windows::Forms::Button^ Updatebutton;
	private: System::Windows::Forms::TextBox^ MeaningtextBox;








	private: System::Windows::Forms::Button^ Deletebutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
















	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeForm::typeid));
			this->Search_Bar = (gcnew System::Windows::Forms::TextBox());
			this->Searchlabel = (gcnew System::Windows::Forms::Label());
			this->Headinglabel = (gcnew System::Windows::Forms::Label());
			this->Addbutton = (gcnew System::Windows::Forms::Button());
			this->Updatebutton = (gcnew System::Windows::Forms::Button());
			this->MeaningtextBox = (gcnew System::Windows::Forms::TextBox());
			this->Deletebutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Search_Bar
			// 
			this->Search_Bar->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->Search_Bar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Search_Bar->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_Bar->ForeColor = System::Drawing::Color::DarkBlue;
			this->Search_Bar->Location = System::Drawing::Point(342, 193);
			this->Search_Bar->Name = L"Search_Bar";
			this->Search_Bar->Size = System::Drawing::Size(263, 27);
			this->Search_Bar->TabIndex = 0;
			this->Search_Bar->Text = L"Type any Word or Phrase";
			this->Search_Bar->Click += gcnew System::EventHandler(this, &HomeForm::Search_Bar_Click);
			this->Search_Bar->TextChanged += gcnew System::EventHandler(this, &HomeForm::Search_Bar_TextChanged);
			// 
			// Searchlabel
			// 
			this->Searchlabel->AutoSize = true;
			this->Searchlabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->Searchlabel->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Searchlabel->ForeColor = System::Drawing::Color::Green;
			this->Searchlabel->Location = System::Drawing::Point(622, 223);
			this->Searchlabel->Name = L"Searchlabel";
			this->Searchlabel->Size = System::Drawing::Size(75, 19);
			this->Searchlabel->TabIndex = 1;
			this->Searchlabel->Text = L"Not Found";
			this->Searchlabel->Visible = false;
			// 
			// Headinglabel
			// 
			this->Headinglabel->AutoSize = true;
			this->Headinglabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->Headinglabel->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Headinglabel->ForeColor = System::Drawing::Color::MidnightBlue;
			this->Headinglabel->Location = System::Drawing::Point(621, 166);
			this->Headinglabel->Name = L"Headinglabel";
			this->Headinglabel->Size = System::Drawing::Size(80, 23);
			this->Headinglabel->TabIndex = 2;
			this->Headinglabel->Text = L"Meaning";
			this->Headinglabel->Visible = false;
			// 
			// Addbutton
			// 
			this->Addbutton->BackColor = System::Drawing::Color::Navy;
			this->Addbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Addbutton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addbutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Addbutton->Location = System::Drawing::Point(625, 254);
			this->Addbutton->Name = L"Addbutton";
			this->Addbutton->Size = System::Drawing::Size(139, 32);
			this->Addbutton->TabIndex = 4;
			this->Addbutton->Text = L"Add Word";
			this->Addbutton->UseVisualStyleBackColor = false;
			this->Addbutton->Visible = false;
			this->Addbutton->Click += gcnew System::EventHandler(this, &HomeForm::Addbutton_Click);
			// 
			// Updatebutton
			// 
			this->Updatebutton->BackColor = System::Drawing::Color::Navy;
			this->Updatebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Updatebutton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Updatebutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Updatebutton->Location = System::Drawing::Point(625, 254);
			this->Updatebutton->Name = L"Updatebutton";
			this->Updatebutton->Size = System::Drawing::Size(139, 32);
			this->Updatebutton->TabIndex = 5;
			this->Updatebutton->Text = L"Update Meaning";
			this->Updatebutton->UseVisualStyleBackColor = false;
			this->Updatebutton->Visible = false;
			this->Updatebutton->Click += gcnew System::EventHandler(this, &HomeForm::Updatebutton_Click);
			// 
			// MeaningtextBox
			// 
			this->MeaningtextBox->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->MeaningtextBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MeaningtextBox->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeaningtextBox->ForeColor = System::Drawing::Color::DarkBlue;
			this->MeaningtextBox->Location = System::Drawing::Point(625, 193);
			this->MeaningtextBox->Name = L"MeaningtextBox";
			this->MeaningtextBox->Size = System::Drawing::Size(226, 27);
			this->MeaningtextBox->TabIndex = 6;
			this->MeaningtextBox->Text = L"Type meaning";
			this->MeaningtextBox->Visible = false;
			// 
			// Deletebutton
			// 
			this->Deletebutton->BackColor = System::Drawing::Color::Navy;
			this->Deletebutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Deletebutton->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Deletebutton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Deletebutton->Location = System::Drawing::Point(625, 307);
			this->Deletebutton->Name = L"Deletebutton";
			this->Deletebutton->Size = System::Drawing::Size(139, 32);
			this->Deletebutton->TabIndex = 15;
			this->Deletebutton->Text = L"Delete Word";
			this->Deletebutton->UseVisualStyleBackColor = false;
			this->Deletebutton->Visible = false;
			this->Deletebutton->Click += gcnew System::EventHandler(this, &HomeForm::Deletebutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(342, 223);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->MaximumSize = System::Drawing::Size(263, 26);
			this->label1->MinimumSize = System::Drawing::Size(263, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 26);
			this->label1->TabIndex = 17;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &HomeForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 249);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->MaximumSize = System::Drawing::Size(263, 26);
			this->label2->MinimumSize = System::Drawing::Size(263, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 26);
			this->label2->TabIndex = 18;
			this->label2->Text = L"label2";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label2->Visible = false;
			this->label2->Click += gcnew System::EventHandler(this, &HomeForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(342, 275);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->MaximumSize = System::Drawing::Size(263, 26);
			this->label3->MinimumSize = System::Drawing::Size(263, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 26);
			this->label3->TabIndex = 19;
			this->label3->Text = L"label3";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &HomeForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(342, 301);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->MaximumSize = System::Drawing::Size(263, 26);
			this->label4->MinimumSize = System::Drawing::Size(263, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(263, 26);
			this->label4->TabIndex = 20;
			this->label4->Text = L"label4";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &HomeForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(342, 327);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->MaximumSize = System::Drawing::Size(263, 26);
			this->label5->MinimumSize = System::Drawing::Size(263, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(263, 26);
			this->label5->TabIndex = 21;
			this->label5->Text = L"label5";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &HomeForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(342, 353);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->MaximumSize = System::Drawing::Size(263, 26);
			this->label6->MinimumSize = System::Drawing::Size(263, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(263, 26);
			this->label6->TabIndex = 22;
			this->label6->Text = L"label6";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label6->Visible = false;
			this->label6->Click += gcnew System::EventHandler(this, &HomeForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(184)), static_cast<System::Int32>(static_cast<System::Byte>(195)),
				static_cast<System::Int32>(static_cast<System::Byte>(207)));
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(342, 379);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->MaximumSize = System::Drawing::Size(263, 26);
			this->label7->MinimumSize = System::Drawing::Size(263, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(263, 26);
			this->label7->TabIndex = 23;
			this->label7->Text = L"label7";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &HomeForm::label7_Click);
			// 
			// HomeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(221)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1010, 548);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Deletebutton);
			this->Controls->Add(this->MeaningtextBox);
			this->Controls->Add(this->Updatebutton);
			this->Controls->Add(this->Addbutton);
			this->Controls->Add(this->Headinglabel);
			this->Controls->Add(this->Searchlabel);
			this->Controls->Add(this->Search_Bar);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"HomeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dictionary";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_Bar_TextChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Search_Bar_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Addbutton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Updatebutton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Deletebutton_Click(System::Object^ sender, System::EventArgs^ e);



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label1->Text;
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label2->Text;
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label3->Text;
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label4->Text;
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label5->Text;
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label6->Text;
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Search_Bar->Text = label7->Text;
	}


	};
}
