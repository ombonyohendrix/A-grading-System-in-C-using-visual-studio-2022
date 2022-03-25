#pragma once
#include "User.h"
#include "ClassOneResultForm.h"
#include "ClassTwoResultForm.h"
#include "ClassThreeResultForm.h"
#include "ClassFourResultForm.h"
#include "ClassFiveResultForm.h"
#include "ClassSixResultForm.h"
#include "ClassSevenResultForm.h"
#include "ClassEightForm.h"

namespace MyGradingSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User ^user)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnClassEight;
	private: System::Windows::Forms::Button^ btnClassSeven;
	private: System::Windows::Forms::Button^ btnClassSix;
	private: System::Windows::Forms::Button^ btnClassFive;
	private: System::Windows::Forms::Button^ btnClassFour;
	private: System::Windows::Forms::Button^ btnClassThree;
	private: System::Windows::Forms::Button^ btnClassTwo;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnClassOne;
	private: System::Windows::Forms::Label^ label2;


	protected:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnClassOne = (gcnew System::Windows::Forms::Button());
			this->btnClassEight = (gcnew System::Windows::Forms::Button());
			this->btnClassSeven = (gcnew System::Windows::Forms::Button());
			this->btnClassSix = (gcnew System::Windows::Forms::Button());
			this->btnClassFive = (gcnew System::Windows::Forms::Button());
			this->btnClassFour = (gcnew System::Windows::Forms::Button());
			this->btnClassThree = (gcnew System::Windows::Forms::Button());
			this->btnClassTwo = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Yellow;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(639, 66);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Yellow;
			this->panel1->Controls->Add(this->btnClassOne);
			this->panel1->Controls->Add(this->btnClassEight);
			this->panel1->Controls->Add(this->btnClassSeven);
			this->panel1->Controls->Add(this->btnClassSix);
			this->panel1->Controls->Add(this->btnClassFive);
			this->panel1->Controls->Add(this->btnClassFour);
			this->panel1->Controls->Add(this->btnClassThree);
			this->panel1->Controls->Add(this->btnClassTwo);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(19, 82);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(205, 488);
			this->panel1->TabIndex = 1;
			// 
			// btnClassOne
			// 
			this->btnClassOne->Location = System::Drawing::Point(4, 105);
			this->btnClassOne->Name = L"btnClassOne";
			this->btnClassOne->Size = System::Drawing::Size(196, 33);
			this->btnClassOne->TabIndex = 9;
			this->btnClassOne->Text = L"Class One";
			this->btnClassOne->UseVisualStyleBackColor = true;
			this->btnClassOne->Click += gcnew System::EventHandler(this, &MainForm::btnClassOne_Click);
			// 
			// btnClassEight
			// 
			this->btnClassEight->Location = System::Drawing::Point(0, 392);
			this->btnClassEight->Name = L"btnClassEight";
			this->btnClassEight->Size = System::Drawing::Size(197, 41);
			this->btnClassEight->TabIndex = 8;
			this->btnClassEight->Text = L"Class Eight";
			this->btnClassEight->UseVisualStyleBackColor = true;
			this->btnClassEight->Click += gcnew System::EventHandler(this, &MainForm::btnClassEight_Click);
			// 
			// btnClassSeven
			// 
			this->btnClassSeven->Location = System::Drawing::Point(0, 342);
			this->btnClassSeven->Name = L"btnClassSeven";
			this->btnClassSeven->Size = System::Drawing::Size(197, 44);
			this->btnClassSeven->TabIndex = 7;
			this->btnClassSeven->Text = L"Class Seven";
			this->btnClassSeven->UseVisualStyleBackColor = true;
			this->btnClassSeven->Click += gcnew System::EventHandler(this, &MainForm::btnClassSeven_Click);
			// 
			// btnClassSix
			// 
			this->btnClassSix->Location = System::Drawing::Point(3, 302);
			this->btnClassSix->Name = L"btnClassSix";
			this->btnClassSix->Size = System::Drawing::Size(197, 34);
			this->btnClassSix->TabIndex = 6;
			this->btnClassSix->Text = L"Class Six";
			this->btnClassSix->UseVisualStyleBackColor = true;
			this->btnClassSix->Click += gcnew System::EventHandler(this, &MainForm::btnClassSix_Click);
			// 
			// btnClassFive
			// 
			this->btnClassFive->Location = System::Drawing::Point(4, 265);
			this->btnClassFive->Name = L"btnClassFive";
			this->btnClassFive->Size = System::Drawing::Size(194, 31);
			this->btnClassFive->TabIndex = 5;
			this->btnClassFive->Text = L"Class Five";
			this->btnClassFive->UseVisualStyleBackColor = true;
			this->btnClassFive->Click += gcnew System::EventHandler(this, &MainForm::btnClassFive_Click);
			// 
			// btnClassFour
			// 
			this->btnClassFour->Location = System::Drawing::Point(3, 221);
			this->btnClassFour->Name = L"btnClassFour";
			this->btnClassFour->Size = System::Drawing::Size(194, 38);
			this->btnClassFour->TabIndex = 4;
			this->btnClassFour->Text = L"Class Four";
			this->btnClassFour->UseVisualStyleBackColor = true;
			this->btnClassFour->Click += gcnew System::EventHandler(this, &MainForm::btnClassFour_Click);
			// 
			// btnClassThree
			// 
			this->btnClassThree->Location = System::Drawing::Point(0, 181);
			this->btnClassThree->Name = L"btnClassThree";
			this->btnClassThree->Size = System::Drawing::Size(197, 34);
			this->btnClassThree->TabIndex = 3;
			this->btnClassThree->Text = L"Class Three";
			this->btnClassThree->UseVisualStyleBackColor = true;
			this->btnClassThree->Click += gcnew System::EventHandler(this, &MainForm::btnClassThree_Click);
			// 
			// btnClassTwo
			// 
			this->btnClassTwo->Location = System::Drawing::Point(3, 144);
			this->btnClassTwo->Name = L"btnClassTwo";
			this->btnClassTwo->Size = System::Drawing::Size(197, 31);
			this->btnClassTwo->TabIndex = 2;
			this->btnClassTwo->Text = L"Class Two";
			this->btnClassTwo->UseVisualStyleBackColor = true;
			this->btnClassTwo->Click += gcnew System::EventHandler(this, &MainForm::btnClassTwo_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(4, 28);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(193, 70);
			this->panel2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 70);
			this->label2->TabIndex = 0;
			this->label2->Text = L"DASHBORD";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Fuchsia;
			this->ClientSize = System::Drawing::Size(663, 582);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	///public: bool switchToClassOneResult = false;
///private: System::Void btnClassOne_Click(System::Object^ sender, System::EventArgs^ e) {
///this->switchToClassOneResult = true;
///}
		///public: bool switchToClassOneResult = false;
///private: System::Void llClassOne_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	///this->switchToClassOneResult = true;
	///this->Close();
///}
private: System::Void btnClassOne_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassOneResultForm^ obj1 = gcnew ClassOneResultForm();
	obj1->ShowDialog();

}
private: System::Void btnClassTwo_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassTwoResultForm^ obj2 = gcnew ClassTwoResultForm();
	obj2->ShowDialog();

}
private: System::Void btnClassThree_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassThreeResultForm^ obj3 = gcnew ClassThreeResultForm();
	obj3->ShowDialog();
}
private: System::Void btnClassFour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassFourResultForm^ obj4 = gcnew ClassFourResultForm();
	obj4->ShowDialog();

}
private: System::Void btnClassFive_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassFiveResultForm^ obj5 = gcnew ClassFiveResultForm();
	obj5->ShowDialog();
}
private: System::Void btnClassSix_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassSixResultForm^ obj6 = gcnew ClassSixResultForm();
	this->ShowDialog();
}
private: System::Void btnClassSeven_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassSevenResultForm^ obj7 = gcnew ClassSevenResultForm();
	this->ShowDialog();
}
private: System::Void btnClassEight_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	ClassEightForm^ obj8 = gcnew ClassEightForm();
	this->ShowDialog();
}
};
}
