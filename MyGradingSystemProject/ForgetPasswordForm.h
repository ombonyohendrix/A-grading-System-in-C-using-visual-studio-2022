#pragma once
#include"User.h"

namespace MyGradingSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Net::Mail;
	

	/// <summary>
	/// Summary for ForgetPasswordForm
	/// </summary>
	public ref class ForgetPasswordForm : public System::Windows::Forms::Form
	{   
		String^ randomCode;
	public: static String^ to;
	public:
		ForgetPasswordForm(void)
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
		~ForgetPasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btnSend;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnVerifyCode;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnVerifyCode = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Email";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(349, 31);
			this->textBox1->TabIndex = 1;
			// 
			// btnSend
			// 
			this->btnSend->Location = System::Drawing::Point(164, 121);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Size = System::Drawing::Size(140, 50);
			this->btnSend->TabIndex = 2;
			this->btnSend->Text = L"Send";
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &ForgetPasswordForm::btnSend_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 229);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Code";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 229);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(349, 31);
			this->textBox2->TabIndex = 4;
			// 
			// btnVerifyCode
			// 
			this->btnVerifyCode->Location = System::Drawing::Point(164, 294);
			this->btnVerifyCode->Name = L"btnVerifyCode";
			this->btnVerifyCode->Size = System::Drawing::Size(140, 43);
			this->btnVerifyCode->TabIndex = 5;
			this->btnVerifyCode->Text = L"Verify Code";
			this->btnVerifyCode->UseVisualStyleBackColor = true;
			// 
			// ForgetPasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(568, 502);
			this->Controls->Add(this->btnVerifyCode);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ForgetPasswordForm";
			this->Text = L"ForgetPasswordForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: User^ user = nullptr;
	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {

		///String^ messageBody;
		///int Random rand = gcnew rand();
		///randomCode = (rand.Next(999999)).ToString();

	}
};
}
