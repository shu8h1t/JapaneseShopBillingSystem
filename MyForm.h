#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::CheckBox^  checkBox6;


	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;





	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox11;

	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox19;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(33, 31);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1282, 114);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(368, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(581, 73);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nakamoto Ramen ";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->textBox19);
			this->panel2->Controls->Add(this->checkBox18);
			this->panel2->Controls->Add(this->textBox18);
			this->panel2->Controls->Add(this->checkBox17);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->checkBox6);
			this->panel2->Controls->Add(this->checkBox5);
			this->panel2->Controls->Add(this->checkBox4);
			this->panel2->Controls->Add(this->checkBox3);
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Location = System::Drawing::Point(33, 179);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(445, 537);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(291, 439);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 22);
			this->textBox19->TabIndex = 17;
			this->textBox19->Text = L"0";
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox19->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox18->Location = System::Drawing::Point(36, 439);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(111, 24);
			this->checkBox18->TabIndex = 16;
			this->checkBox18->Text = L"Hakodate ";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox18_CheckedChanged);
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(291, 391);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 22);
			this->textBox18->TabIndex = 15;
			this->textBox18->Text = L"0";
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox18->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox17->Location = System::Drawing::Point(36, 391);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(101, 24);
			this->checkBox17->TabIndex = 14;
			this->checkBox17->Text = L"Sapporo ";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox17_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(171, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 29);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Ramen";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(291, 159);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(291, 210);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Tag = L"";
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(291, 255);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 10;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(291, 300);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(291, 345);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(36, 345);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(78, 24);
			this->checkBox6->TabIndex = 7;
			this->checkBox6->Text = L"Shoyu";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(36, 300);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(102, 24);
			this->checkBox5->TabIndex = 6;
			this->checkBox5->Text = L"Tonkotsu";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(36, 255);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(64, 24);
			this->checkBox4->TabIndex = 5;
			this->checkBox4->Text = L"Shio";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(36, 210);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(65, 24);
			this->checkBox3->TabIndex = 4;
			this->checkBox3->Text = L"Miso";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(36, 159);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(110, 24);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Tsukemen";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(291, 111);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(36, 111);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(217, 24);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Instant Ramen Noodles";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->textBox13);
			this->panel3->Controls->Add(this->textBox14);
			this->panel3->Controls->Add(this->textBox15);
			this->panel3->Controls->Add(this->checkBox13);
			this->panel3->Controls->Add(this->checkBox14);
			this->panel3->Controls->Add(this->checkBox15);
			this->panel3->Controls->Add(this->textBox16);
			this->panel3->Controls->Add(this->checkBox16);
			this->panel3->Location = System::Drawing::Point(484, 179);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(404, 257);
			this->panel3->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(155, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(116, 29);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Desserts";
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(278, 107);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 22);
			this->textBox13->TabIndex = 20;
			this->textBox13->Text = L"0";
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(278, 158);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 19;
			this->textBox14->Text = L"0";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox15
			// 
			this->textBox15->Enabled = false;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(278, 203);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 18;
			this->textBox15->Text = L"0";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox13->Location = System::Drawing::Point(23, 203);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(81, 24);
			this->checkBox13->TabIndex = 17;
			this->checkBox13->Text = L"Dango";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox13_CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox14->Location = System::Drawing::Point(23, 158);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(98, 24);
			this->checkBox14->TabIndex = 16;
			this->checkBox14->Text = L"Dorayaki";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox14_CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox15->Location = System::Drawing::Point(23, 107);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(90, 24);
			this->checkBox15->TabIndex = 15;
			this->checkBox15->Text = L"Daifuku";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox15_CheckedChanged);
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(278, 66);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 22);
			this->textBox16->TabIndex = 14;
			this->textBox16->Text = L"0";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox16->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox16_TextChanged);
			this->textBox16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox16->Location = System::Drawing::Point(23, 62);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(75, 24);
			this->checkBox16->TabIndex = 13;
			this->checkBox16->Text = L"Mochi";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox16_CheckedChanged);
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->textBox21);
			this->panel4->Controls->Add(this->textBox20);
			this->panel4->Controls->Add(this->checkBox20);
			this->panel4->Controls->Add(this->checkBox19);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Controls->Add(this->textBox9);
			this->panel4->Controls->Add(this->textBox10);
			this->panel4->Controls->Add(this->textBox11);
			this->panel4->Controls->Add(this->textBox12);
			this->panel4->Controls->Add(this->checkBox7);
			this->panel4->Controls->Add(this->checkBox8);
			this->panel4->Controls->Add(this->checkBox9);
			this->panel4->Controls->Add(this->checkBox10);
			this->panel4->Controls->Add(this->checkBox11);
			this->panel4->Controls->Add(this->checkBox12);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(894, 179);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(421, 537);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// textBox21
			// 
			this->textBox21->Enabled = false;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(261, 435);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 22);
			this->textBox21->TabIndex = 30;
			this->textBox21->Text = L"0";
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox21->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox20
			// 
			this->textBox20->Enabled = false;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(261, 387);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 22);
			this->textBox20->TabIndex = 29;
			this->textBox20->Text = L"0";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox20->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox20
			// 
			this->checkBox20->AutoSize = true;
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox20->Location = System::Drawing::Point(30, 387);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(87, 24);
			this->checkBox20->TabIndex = 28;
			this->checkBox20->Text = L"Matcha";
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox20_CheckedChanged);
			// 
			// checkBox19
			// 
			this->checkBox19->AutoSize = true;
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox19->Location = System::Drawing::Point(30, 435);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(105, 24);
			this->checkBox19->TabIndex = 27;
			this->checkBox19->Text = L"Ofukucha";
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox19_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(155, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 29);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Beverages";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(261, 165);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(261, 215);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 24;
			this->textBox8->Tag = L"";
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(261, 257);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 23;
			this->textBox9->Text = L"0";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(261, 302);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 22;
			this->textBox10->Text = L"0";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(261, 347);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 21;
			this->textBox11->Text = L"0";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(261, 114);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 20;
			this->textBox12->Text = L"0";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(30, 343);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(119, 24);
			this->checkBox7->TabIndex = 19;
			this->checkBox7->Text = L"Genmaicha";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox7_CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(30, 298);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(107, 24);
			this->checkBox8->TabIndex = 18;
			this->checkBox8->Text = L"Ryokucha";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox8_CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox9->Location = System::Drawing::Point(30, 253);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(74, 24);
			this->checkBox9->TabIndex = 17;
			this->checkBox9->Text = L"Aojiru";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox9_CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->Location = System::Drawing::Point(30, 211);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(112, 24);
			this->checkBox10->TabIndex = 16;
			this->checkBox10->Text = L"Kombucha";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox10_CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->Location = System::Drawing::Point(30, 165);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(134, 24);
			this->checkBox11->TabIndex = 15;
			this->checkBox11->Text = L"Matcha Latte";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox11_CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox12->Location = System::Drawing::Point(30, 114);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(120, 24);
			this->checkBox12->TabIndex = 13;
			this->checkBox12->Text = L"Sakura Tea";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox12_CheckedChanged);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->comboBox1);
			this->panel6->Controls->Add(this->textBox25);
			this->panel6->Controls->Add(this->textBox24);
			this->panel6->Controls->Add(this->textBox23);
			this->panel6->Controls->Add(this->textBox22);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Controls->Add(this->panel5);
			this->panel6->Controls->Add(this->textBox17);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Location = System::Drawing::Point(484, 442);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(404, 274);
			this->panel6->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(28, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 20;
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(293, 61);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 26);
			this->textBox25->TabIndex = 19;
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(293, 99);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 26);
			this->textBox24->TabIndex = 18;
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(293, 134);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 26);
			this->textBox23->TabIndex = 17;
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(293, 20);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 26);
			this->textBox22->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(196, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Change";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(196, 59);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Tax";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(196, 97);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Sub Total";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(196, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Total";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Location = System::Drawing::Point(180, 6);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(10, 160);
			this->panel7->TabIndex = 11;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Location = System::Drawing::Point(23, 172);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(355, 85);
			this->panel5->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(234, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(122, 17);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"RESET";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->button2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(14, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"TOTAL";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(39, 110);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 22);
			this->textBox17->TabIndex = 9;
			this->textBox17->Text = L"0";
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox17->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Numbers_Only);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Payment Method";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1352, 749);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		const double Price_InstaRamen = 135;
		const double Price_Tsukum = 150;
		const double Price_Miso = 250;
		const double Price_Shio = 275;
		const double Price_Tonko = 270;
		const double Price_Shoy = 300;
		const double Price_Sappo = 300;
		const double Price_Hako = 330;
		const double Price_Mochi = 70;
		const double Price_Daifu = 80;
		const double Price_Dora = 85;
		const double Price_Dan = 95;
		const double Price_Saku = 100;
		const double Price_MatchLatt = 100;
		const double Price_Kombu = 100;
		const double Price_Aoiji = 120;
		const double Price_Ryoku = 130;
		const double Price_Genma = 135;
		const double Price_Matc = 145;
		const double Price_Ofuku = 190;
		const double Tax_rate = 3.9;

		double iTotal, iSubtotal, iTax, iChange, iCost;


	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		comboBox1->Items->Add(" ");
		comboBox1->Items->Add("Cash");
		comboBox1->Items->Add("Debit Card");
		comboBox1->Items->Add("Master Card");
		comboBox1->Items->Add("Visa Card");

	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void domainUpDown1_SelectedItemChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel4_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 

private: System::Void checkBox12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox12->Checked == true) {
		textBox12->Enabled = true;
		textBox12->Text = "";
	}
	else if (checkBox12->Checked == false) {
		textBox12->Enabled = false;
		textBox12->Text = "0";
	}
}

		 
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	System::Windows::Forms::DialogResult iExit;

	iExit = MessageBox::Show("Confirm if you want to exit ", "NakaRamen", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::ExitThread();
	}
	else {
		e->Cancel = true;
	}

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox22->Text = "";
	textBox25->Text = "";
	textBox24->Text = "";
	textBox23->Text = "";
	comboBox1->Text = "";
	textBox17->Text = "0";
	textBox17->Enabled  =  true;
	checkBox1->Checked  =  false;
	checkBox2->Checked  =  false;
	checkBox3->Checked  =  false;
	checkBox4->Checked  =  false;
	checkBox5->Checked  =  false;
	checkBox6->Checked  =  false;
	checkBox7->Checked  =  false;
	checkBox8->Checked  =  false;
	checkBox9->Checked  =  false;
	checkBox10->Checked = false;
	checkBox11->Checked = false;
	checkBox12->Checked = false;
	checkBox13->Checked = false;
	checkBox14->Checked = false;
	checkBox15->Checked = false;
	checkBox16->Checked = false;
	checkBox17->Checked = false;
	checkBox18->Checked = false;
	checkBox19->Checked = false;
	checkBox20->Checked = false;

	textBox1->Text = "0";
	textBox2->Text = "0";
	textBox3->Text = "0";
	textBox4->Text = "0";
	textBox5->Text = "0";
	textBox6->Text = "0";
	textBox18->Text = "0";
	textBox19->Text = "0";
	textBox13->Text = "0";
	textBox14->Text = "0";
	textBox15->Text = "0";
	textBox16->Text = "0";
	textBox7->Text = "0";
	textBox8->Text = "0";
	textBox9->Text = "0";
	textBox10->Text = "0";
	textBox11->Text = "0";
	textBox12->Text = "0";
	textBox21->Text = "0";
	textBox20->Text = "0";
}
private: System::Void Numbers_Only(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox1->Checked == true) {
		textBox1->Enabled = true;
		textBox1->Text = "";
	}
	else if (checkBox1->Checked == false) {
		textBox1->Enabled = false;
		textBox1->Text = "0";
	}

}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {


	if (checkBox2->Checked == true) {
		textBox6->Enabled = true;
		textBox6->Text = "";
	}
	else if (checkBox2->Checked == false) {
		textBox6->Enabled = false;
		textBox6->Text = "0";
	}
	
}


private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox3->Checked == true) {
		textBox5->Enabled = true;
		textBox5->Text = "";
	}
	else if (checkBox3->Checked == false) {
		textBox5->Enabled = false;
		textBox5->Text = "0";
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox4->Checked == true) {
		textBox4->Enabled = true;
		textBox4->Text = "";
	}
	else if (checkBox4->Checked == false) {
		textBox4->Enabled = false;
		textBox4->Text = "0";
	}
}



private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox5->Checked == true) {
		textBox3->Enabled = true;
		textBox3->Text = "";
	}
	else if (checkBox5->Checked == false) {
		textBox3->Enabled = false;
		textBox3->Text = "0";
	}
}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox6->Checked == true) {
		textBox2->Enabled = true;
		textBox2->Text = "";
	}
	else if (checkBox6->Checked == false) {
		textBox2->Enabled = false;
		textBox2->Text = "0";
	}
}

private: System::Void checkBox17_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox17->Checked == true) {
		textBox18->Enabled = true;
		textBox18->Text = "";
	}
	else if (checkBox17->Checked == false) {
		textBox18->Enabled = false;
		textBox18->Text = "0";
	}
}


private: System::Void checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox18->Checked == true) {
		textBox19->Enabled = true;
		textBox19->Text = "";
	}
	else if (checkBox18->Checked == false) {
		textBox19->Enabled = false;
		textBox19->Text = "0";
	}
}
private: System::Void checkBox16_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox16->Checked == true) {
		textBox16->Enabled = true;
		textBox16->Text = "";
	}
	else if (checkBox16->Checked == false) {
		textBox16->Enabled = false;
		textBox16->Text = "0";
	}
}

private: System::Void checkBox15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox15->Checked == true) {
		textBox13->Enabled = true;
		textBox13->Text = "";
	}
	else if (checkBox15->Checked == false) {
		textBox13->Enabled = false;
		textBox13->Text = "0";
	}
}
private: System::Void checkBox14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox14->Checked == true) {
		textBox14->Enabled = true;
		textBox14->Text = "";
	}
	else if (checkBox14->Checked == false) {
		textBox14->Enabled = false;
		textBox14->Text = "0";
	}
}
private: System::Void checkBox13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox13->Checked == true) {
		textBox15->Enabled = true;
		textBox15->Text = "";
	}
	else if (checkBox13->Checked == false) {
		textBox15->Enabled = false;
		textBox15->Text = "0";
	}
}
private: System::Void checkBox11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox11->Checked == true) {
		textBox7->Enabled = true;
		textBox7->Text = "";
	}
	else if (checkBox11->Checked == false) {
		textBox7->Enabled = false;
		textBox7->Text = "0";
	}
}

private: System::Void checkBox10_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (checkBox10->Checked == true) {
		textBox8->Enabled = true;
		textBox8->Text = "";
	}
	else if (checkBox10->Checked == false) {
		textBox8->Enabled = false;
		textBox8->Text = "0";
	}
}


private: System::Void checkBox9_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox9->Checked == true) {
		textBox9->Enabled = true;
		textBox9->Text = "";
	}
	else if (checkBox9->Checked == false) {
		textBox9->Enabled = false;
		textBox9->Text = "0";
	}
}
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox8->Checked == true) {
		textBox10->Enabled = true;
		textBox10->Text = "";
	}
	else if (checkBox8->Checked == false) {
		textBox10->Enabled = false;
		textBox10->Text = "0";
	}
}

private: System::Void checkBox7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox7->Checked == true) {
		textBox11->Enabled = true;
		textBox11->Text = "";
	}
	else if (checkBox7->Checked == false) {
		textBox11->Enabled = false;
		textBox11->Text = "0";
	}
}

private: System::Void checkBox20_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox20->Checked == true) {
		textBox20->Enabled = true;
		textBox20->Text = "";
	}
	else if (checkBox20->Checked == false) {
		textBox20->Enabled = false;
		textBox20->Text = "0";
	}
}
private: System::Void checkBox19_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if (checkBox19->Checked == true) {
		textBox21->Enabled = true;
		textBox21->Text = "";
	}
	else if (checkBox19->Checked == false) {
		textBox21->Enabled = false;
		textBox21->Text = "0";
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	double itemCost[20];

	itemCost[0] = Double::Parse(textBox1->Text)*Price_InstaRamen;
	itemCost[1] = Double::Parse(textBox6->Text)*Price_Tsukum;
	itemCost[2] = Double::Parse(textBox5->Text)*Price_Miso;
	itemCost[3] = Double::Parse(textBox4->Text)*Price_Shio;
	itemCost[4] = Double::Parse(textBox3->Text)*Price_Tonko;
	itemCost[5] = Double::Parse(textBox2->Text)*Price_Shoy;
	itemCost[6] = Double::Parse(textBox18->Text)*Price_Sappo;
	itemCost[7] = Double::Parse(textBox19->Text)*Price_Hako;
	itemCost[8] = Double::Parse(textBox16->Text)*Price_Mochi;
	itemCost[9] = Double::Parse(textBox13->Text)*Price_Daifu;
	itemCost[10] = Double::Parse(textBox14->Text)*Price_Dora;
	itemCost[11] = Double::Parse(textBox15->Text)*Price_Dan;
	itemCost[12] = Double::Parse(textBox1->Text)*Price_Saku;
	itemCost[13] = Double::Parse(textBox1->Text)*Price_MatchLatt;
	itemCost[14] = Double::Parse(textBox1->Text)*Price_Kombu;
	itemCost[15] = Double::Parse(textBox1->Text)*Price_Aoiji;
	itemCost[16] = Double::Parse(textBox1->Text)*Price_Ryoku;
	itemCost[17] = Double::Parse(textBox1->Text)*Price_Genma;
	itemCost[18] = Double::Parse(textBox1->Text)*Price_Matc;
	itemCost[19] = Double::Parse(textBox1->Text)*Price_Ofuku;
	

	if (comboBox1->Text == "Cash") {
		textBox17->Enabled = true;
		textBox17->Text = "";
		iSubtotal = itemCost[0] + itemCost[1] + itemCost[2] + itemCost[3] + itemCost[4] + itemCost[5] + itemCost[6] +
			itemCost[7] + itemCost[8] + itemCost[9] + itemCost[10] + itemCost[11] + itemCost[12] + itemCost[13] + itemCost[14] +
			itemCost[15] + itemCost[16] + itemCost[17] + itemCost[18] + itemCost[19];

		textBox24->Text = System::Convert::ToString(iSubtotal);
		iTax = (iSubtotal*Tax_rate)/100;
		textBox25->Text = System::Convert::ToString(iTax);
		iTotal = (iSubtotal + iTax);
		textBox23->Text = System::Convert::ToString(iTotal);

		iChange = Double::Parse(textBox17->Text);
		iCost = iChange - iTotal;

		textBox22->Text = System::Convert::ToString(iCost);

		textBox22->Text = String::Format("{0:C2}", iCost);
		textBox25->Text = String::Format("{0:C2}", iTax);
		textBox24->Text = String::Format("{0:C2}", iSubtotal);
		textBox23->Text = String::Format("{0:C2}", iTotal);


	}
	else if(comboBox1->Text == "Master Card" || comboBox1->Text == "Visa Card" || comboBox1->Text == "Debit Card") {

		textBox17->Enabled = false;

		iSubtotal = itemCost[0] + itemCost[1] + itemCost[2] + itemCost[3] + itemCost[4] + itemCost[5] + itemCost[6] +
			itemCost[7] + itemCost[8] + itemCost[9] + itemCost[10] + itemCost[11] + itemCost[12] + itemCost[13] + itemCost[14] +
			itemCost[15] + itemCost[16] + itemCost[17] + itemCost[18] + itemCost[19];

		textBox24->Text = System::Convert::ToString(iSubtotal);
		iTax = (iSubtotal*Tax_rate) / 100;
		textBox25->Text = System::Convert::ToString(iTax);
		iTotal = (iSubtotal + iTax);
		textBox23->Text = System::Convert::ToString(iTotal);

		textBox25->Text = String::Format("{0:C2}", iTax);
		textBox24->Text = String::Format("{0:C2}", iSubtotal);
		textBox23->Text = String::Format("{0:C2}", iTotal);

	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	System::Windows::Forms::DialogResult iExit;

	iExit = MessageBox::Show("Confirm if you want to exit ", "NakaRamen", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::ExitThread();
	}
	

}
};
}
