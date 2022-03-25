#pragma once

namespace MyGradingSystemProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClassFourResultForm
	/// </summary>
	public ref class ClassFourResultForm : public System::Windows::Forms::Form
	{
	public:
		ClassFourResultForm(void)
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
		~ClassFourResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtStudentID;
	private: System::Windows::Forms::TextBox^ txtFirstname;
	private: System::Windows::Forms::TextBox^ txtSurname;



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ txtTotalScore;
	private: System::Windows::Forms::TextBox^ txtAverage;
	private: System::Windows::Forms::TextBox^ txtRanking;



	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnRanking;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnExit;





	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtKiswahili;
	private: System::Windows::Forms::TextBox^ txtMath;
	private: System::Windows::Forms::TextBox^ txtEnglish;
	private: System::Windows::Forms::TextBox^ txtCRE;
	private: System::Windows::Forms::TextBox^ txtScience;
	private: System::Windows::Forms::TextBox^ txtSocialStudy;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Student_ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Firstname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Class_Code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total_Score;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Average;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ranking;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Kiswahili;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ English;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CRE;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Science;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Social_Study;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtStudentID = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstname = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->txtTotalScore = (gcnew System::Windows::Forms::TextBox());
			this->txtAverage = (gcnew System::Windows::Forms::TextBox());
			this->txtRanking = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnRanking = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtKiswahili = (gcnew System::Windows::Forms::TextBox());
			this->txtMath = (gcnew System::Windows::Forms::TextBox());
			this->txtEnglish = (gcnew System::Windows::Forms::TextBox());
			this->txtCRE = (gcnew System::Windows::Forms::TextBox());
			this->txtScience = (gcnew System::Windows::Forms::TextBox());
			this->txtSocialStudy = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Student_ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Firstname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class_Code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total_Score = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Average = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Ranking = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Kiswahili = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->English = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CRE = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Science = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Social_Study = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 72);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Firstname";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Surname";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(0, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Class Code";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(164, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total Score";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Average";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 326);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ranking";
			// 
			// txtStudentID
			// 
			this->txtStudentID->Location = System::Drawing::Point(157, 24);
			this->txtStudentID->Name = L"txtStudentID";
			this->txtStudentID->Size = System::Drawing::Size(103, 40);
			this->txtStudentID->TabIndex = 7;
			// 
			// txtFirstname
			// 
			this->txtFirstname->Location = System::Drawing::Point(157, 72);
			this->txtFirstname->Name = L"txtFirstname";
			this->txtFirstname->Size = System::Drawing::Size(103, 40);
			this->txtFirstname->TabIndex = 8;
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(157, 124);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(103, 40);
			this->txtSurname->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(157, 174);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(103, 40);
			this->textBox4->TabIndex = 10;
			// 
			// txtTotalScore
			// 
			this->txtTotalScore->Location = System::Drawing::Point(157, 227);
			this->txtTotalScore->Name = L"txtTotalScore";
			this->txtTotalScore->Size = System::Drawing::Size(103, 40);
			this->txtTotalScore->TabIndex = 11;
			// 
			// txtAverage
			// 
			this->txtAverage->Location = System::Drawing::Point(157, 276);
			this->txtAverage->Name = L"txtAverage";
			this->txtAverage->Size = System::Drawing::Size(103, 40);
			this->txtAverage->TabIndex = 12;
			// 
			// txtRanking
			// 
			this->txtRanking->Location = System::Drawing::Point(157, 326);
			this->txtRanking->Name = L"txtRanking";
			this->txtRanking->Size = System::Drawing::Size(103, 40);
			this->txtRanking->TabIndex = 13;
			this->txtRanking->TextChanged += gcnew System::EventHandler(this, &ClassFourResultForm::textBox7_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->Student_ID,
					this->Firstname, this->Surname, this->Class_Code, this->Total_Score, this->Average, this->Ranking, this->Kiswahili, this->English,
					this->CRE, this->Science, this->Social_Study
			});
			this->dataGridView1->Location = System::Drawing::Point(-3, 384);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(753, 150);
			this->dataGridView1->TabIndex = 14;
			// 
			// btnRanking
			// 
			this->btnRanking->Location = System::Drawing::Point(13, 541);
			this->btnRanking->Name = L"btnRanking";
			this->btnRanking->Size = System::Drawing::Size(120, 35);
			this->btnRanking->TabIndex = 15;
			this->btnRanking->Text = L"Ranking";
			this->btnRanking->UseVisualStyleBackColor = true;
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(136, 540);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(124, 35);
			this->btnReset->TabIndex = 16;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(278, 540);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(122, 36);
			this->btnDelete->TabIndex = 17;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(406, 539);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(132, 36);
			this->btnClear->TabIndex = 18;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(567, 541);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(139, 34);
			this->btnExit->TabIndex = 19;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(266, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(130, 33);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Kiswahili";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(266, 72);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 33);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Math";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(272, 124);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 33);
			this->label10->TabIndex = 22;
			this->label10->Text = L"English";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(266, 174);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(76, 33);
			this->label11->TabIndex = 23;
			this->label11->Text = L"CRE";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(266, 227);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 33);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Science";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(272, 276);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(177, 33);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Social Study";
			this->label13->Click += gcnew System::EventHandler(this, &ClassFourResultForm::label13_Click);
			// 
			// txtKiswahili
			// 
			this->txtKiswahili->Location = System::Drawing::Point(406, 24);
			this->txtKiswahili->Name = L"txtKiswahili";
			this->txtKiswahili->Size = System::Drawing::Size(100, 40);
			this->txtKiswahili->TabIndex = 26;
			// 
			// txtMath
			// 
			this->txtMath->Location = System::Drawing::Point(406, 72);
			this->txtMath->Name = L"txtMath";
			this->txtMath->Size = System::Drawing::Size(100, 40);
			this->txtMath->TabIndex = 27;
			// 
			// txtEnglish
			// 
			this->txtEnglish->Location = System::Drawing::Point(406, 124);
			this->txtEnglish->Name = L"txtEnglish";
			this->txtEnglish->Size = System::Drawing::Size(100, 40);
			this->txtEnglish->TabIndex = 28;
			// 
			// txtCRE
			// 
			this->txtCRE->Location = System::Drawing::Point(406, 171);
			this->txtCRE->Name = L"txtCRE";
			this->txtCRE->Size = System::Drawing::Size(100, 40);
			this->txtCRE->TabIndex = 29;
			this->txtCRE->TextChanged += gcnew System::EventHandler(this, &ClassFourResultForm::textBox11_TextChanged);
			// 
			// txtScience
			// 
			this->txtScience->Location = System::Drawing::Point(406, 227);
			this->txtScience->Name = L"txtScience";
			this->txtScience->Size = System::Drawing::Size(100, 40);
			this->txtScience->TabIndex = 30;
			// 
			// txtSocialStudy
			// 
			this->txtSocialStudy->Location = System::Drawing::Point(441, 276);
			this->txtSocialStudy->Name = L"txtSocialStudy";
			this->txtSocialStudy->Size = System::Drawing::Size(65, 40);
			this->txtSocialStudy->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(529, 46);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 313);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			// 
			// Student_ID
			// 
			this->Student_ID->HeaderText = L"Student_ID";
			this->Student_ID->Name = L"Student_ID";
			// 
			// Firstname
			// 
			this->Firstname->HeaderText = L"Firstname";
			this->Firstname->Name = L"Firstname";
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Surname";
			this->Surname->Name = L"Surname";
			// 
			// Class_Code
			// 
			this->Class_Code->HeaderText = L"Class_Code";
			this->Class_Code->Name = L"Class_Code";
			// 
			// Total_Score
			// 
			this->Total_Score->HeaderText = L"Total_Score";
			this->Total_Score->Name = L"Total_Score";
			// 
			// Average
			// 
			this->Average->HeaderText = L"Average";
			this->Average->Name = L"Average";
			// 
			// Ranking
			// 
			this->Ranking->HeaderText = L"Ranking";
			this->Ranking->Name = L"Ranking";
			// 
			// Kiswahili
			// 
			this->Kiswahili->HeaderText = L"Kiswahili";
			this->Kiswahili->Name = L"Kiswahili";
			// 
			// English
			// 
			this->English->HeaderText = L"English";
			this->English->Name = L"English";
			// 
			// CRE
			// 
			this->CRE->HeaderText = L"CRE";
			this->CRE->Name = L"CRE";
			// 
			// Science
			// 
			this->Science->HeaderText = L"Science";
			this->Science->Name = L"Science";
			// 
			// Social_Study
			// 
			this->Social_Study->HeaderText = L"Social_Study";
			this->Social_Study->Name = L"Social_Study";
			// 
			// ClassFourResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(17, 33);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(805, 663);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtSocialStudy);
			this->Controls->Add(this->txtScience);
			this->Controls->Add(this->txtCRE);
			this->Controls->Add(this->txtEnglish);
			this->Controls->Add(this->txtMath);
			this->Controls->Add(this->txtKiswahili);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnRanking);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtRanking);
			this->Controls->Add(this->txtAverage);
			this->Controls->Add(this->txtTotalScore);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->txtFirstname);
			this->Controls->Add(this->txtStudentID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8);
			this->Name = L"ClassFourResultForm";
			this->Text = L"ClassFourResultForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
