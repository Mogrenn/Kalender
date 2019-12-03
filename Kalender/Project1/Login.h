#pragma once
#include <stdio.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>

namespace Project1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		System::String^ password;
		Login(void)
		{
			InitializeComponent();
			
			
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(219, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(195, 20);
			this->textBox1->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(219, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::addStar);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(219, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::validate);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 270);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void validate(System::Object^  sender, System::EventArgs^  e) {

		String^ uname = this->textBox1->Text;

		MessageBox::Show(uname);

	}
		
	
private: System::Void addStar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

	if (e->KeyCode == Keys::Back || e->KeyCode == Keys::Right || e->KeyCode == Keys::Left || e->KeyCode == Keys::Up || e->KeyCode == Keys::Down) {
			
	}
	else {
		
		

		char key = (char)e->KeyValue;
		
		//MessageBox::Show(L"" + char(65));
		
		if (key == 'A') {
			password += key;
			
		}
		e->SuppressKeyPress = true;
		this->textBox2->AppendText("*");
	}
		
}
};
}