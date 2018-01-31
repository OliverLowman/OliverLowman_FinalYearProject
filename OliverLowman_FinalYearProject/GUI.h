#pragma once
#include "Population.h"
#include "Individual.h"
#include <iostream>
#include <fstream>
#include <ctime>
namespace OliverLowman_FinalYearProject {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  popSizeTextBox;
	private: System::Windows::Forms::Label^  TestText;
	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::TextBox^  NoOfGensTextBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  MaxTreeDepthTextBox;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::TextBox^  MutationRateTextbox;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  CrossoverRateTextBox;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  LowestDiffTextBox;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  CurrentGenTextBox;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  AvgDiffTextBox;
	private: System::Windows::Forms::Label^  label20;



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
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->MutationRateTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->CrossoverRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->MaxTreeDepthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NoOfGensTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TestText = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->popSizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->CurrentGenTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LowestDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->AvgDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(62, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Setup Values";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->MutationRateTextbox);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->CrossoverRateTextBox);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->comboBox4);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->MaxTreeDepthTextBox);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->NoOfGensTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->TestText);
			this->panel1->Controls->Add(this->StartButton);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->popSizeTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(-1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(258, 536);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::panel1_Paint);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(142, 426);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"%";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(141, 398);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"%";
			// 
			// MutationRateTextbox
			// 
			this->MutationRateTextbox->Location = System::Drawing::Point(101, 423);
			this->MutationRateTextbox->Name = L"MutationRateTextbox";
			this->MutationRateTextbox->Size = System::Drawing::Size(37, 20);
			this->MutationRateTextbox->TabIndex = 28;
			this->MutationRateTextbox->Text = L"1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 426);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Mutation Rate:";
			// 
			// CrossoverRateTextBox
			// 
			this->CrossoverRateTextBox->Location = System::Drawing::Point(101, 395);
			this->CrossoverRateTextBox->Name = L"CrossoverRateTextBox";
			this->CrossoverRateTextBox->Size = System::Drawing::Size(37, 20);
			this->CrossoverRateTextBox->TabIndex = 26;
			this->CrossoverRateTextBox->Text = L"95";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 397);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Crossover Rate:";
			// 
			// comboBox4
			// 
			this->comboBox4->Enabled = false;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(102, 358);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 21);
			this->comboBox4->TabIndex = 24;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 361);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Mutation Method:";
			// 
			// comboBox3
			// 
			this->comboBox3->Enabled = false;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(102, 330);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 21);
			this->comboBox3->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(2, 331);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Crossover Method:";
			// 
			// comboBox2
			// 
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(102, 298);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(131, 21);
			this->comboBox2->TabIndex = 20;
			this->comboBox2->Text = L"Proportinate Selection";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 302);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 13);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Selection Method:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(62, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 21);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Reproduction";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(102, 233);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 17;
			this->comboBox1->Text = L"Full";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tree Gen Method:";
			// 
			// MaxTreeDepthTextBox
			// 
			this->MaxTreeDepthTextBox->Location = System::Drawing::Point(102, 198);
			this->MaxTreeDepthTextBox->Name = L"MaxTreeDepthTextBox";
			this->MaxTreeDepthTextBox->Size = System::Drawing::Size(100, 20);
			this->MaxTreeDepthTextBox->TabIndex = 15;
			this->MaxTreeDepthTextBox->Text = L"2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 201);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Tree Depth:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(54, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Tree Generation";
			this->label7->Click += gcnew System::EventHandler(this, &GUI::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(144, 130);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"to";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(166, 125);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(36, 20);
			this->textBox4->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(102, 125);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(36, 20);
			this->textBox3->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Test Value Range:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(102, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"X*X+(X-1)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Target Formula:";
			// 
			// NoOfGensTextBox
			// 
			this->NoOfGensTextBox->Location = System::Drawing::Point(102, 72);
			this->NoOfGensTextBox->Name = L"NoOfGensTextBox";
			this->NoOfGensTextBox->Size = System::Drawing::Size(100, 20);
			this->NoOfGensTextBox->TabIndex = 6;
			this->NoOfGensTextBox->Text = L"500";
			this->NoOfGensTextBox->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Max No of Gens:";
			// 
			// TestText
			// 
			this->TestText->AutoSize = true;
			this->TestText->Location = System::Drawing::Point(166, 453);
			this->TestText->Name = L"TestText";
			this->TestText->Size = System::Drawing::Size(0, 13);
			this->TestText->TabIndex = 4;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(81, 476);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &GUI::StartButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Population Size:";
			// 
			// popSizeTextBox
			// 
			this->popSizeTextBox->Location = System::Drawing::Point(102, 46);
			this->popSizeTextBox->Name = L"popSizeTextBox";
			this->popSizeTextBox->Size = System::Drawing::Size(100, 20);
			this->popSizeTextBox->TabIndex = 1;
			this->popSizeTextBox->Text = L"200";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Controls->Add(this->AvgDiffTextBox);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->CurrentGenTextBox);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->LowestDiffTextBox);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Location = System::Drawing::Point(256, 360);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(747, 175);
			this->panel2->TabIndex = 2;
			// 
			// CurrentGenTextBox
			// 
			this->CurrentGenTextBox->BackColor = System::Drawing::SystemColors::Window;
			this->CurrentGenTextBox->Enabled = false;
			this->CurrentGenTextBox->Location = System::Drawing::Point(149, 21);
			this->CurrentGenTextBox->Name = L"CurrentGenTextBox";
			this->CurrentGenTextBox->Size = System::Drawing::Size(100, 20);
			this->CurrentGenTextBox->TabIndex = 3;
			this->CurrentGenTextBox->Text = L"0";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(44, 21);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(99, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Current Generation:";
			// 
			// LowestDiffTextBox
			// 
			this->LowestDiffTextBox->Enabled = false;
			this->LowestDiffTextBox->Location = System::Drawing::Point(149, 69);
			this->LowestDiffTextBox->Name = L"LowestDiffTextBox";
			this->LowestDiffTextBox->Size = System::Drawing::Size(100, 20);
			this->LowestDiffTextBox->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(16, 71);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(127, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Current Lowest Differnce:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(41, 117);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(102, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Average Difference:";
			// 
			// AvgDiffTextBox
			// 
			this->AvgDiffTextBox->Location = System::Drawing::Point(149, 115);
			this->AvgDiffTextBox->Name = L"AvgDiffTextBox";
			this->AvgDiffTextBox->Size = System::Drawing::Size(100, 20);
			this->AvgDiffTextBox->TabIndex = 5;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 537);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ PopSizeInput = popSizeTextBox->Text;
		int MaxPopSize = System::Convert::ToInt16(PopSizeInput);
		String^ MaxNoOfGensInput = NoOfGensTextBox->Text;
		int MaxNoOfGens = System::Convert::ToInt16(MaxNoOfGensInput);
		String^ MaxTreeDepthInput = MaxTreeDepthTextBox->Text;
		int MaxTreeDepth = System::Convert::ToInt16(MaxTreeDepthInput);
		String^ CrossoverRateInput = CrossoverRateTextBox->Text;
		int CrossoverRate = System::Convert::ToInt16(CrossoverRateInput);
		String^ MutationRateInput = MutationRateTextbox->Text;
		int MutationRate = System::Convert::ToInt16(MutationRateInput);
		Population Pop(MaxPopSize, MaxTreeDepth);
		Pop.Generate();	
		
		
		for (int i = 0; i < MaxNoOfGens; i++)
		{
			Pop.Evaluate();
			//float LowestDiffNum = Pop.GetLowestDiff();
			string LowestDiffStr = to_string(Pop.GetLowestDiff());
			String^ LowestDiffOutput = gcnew String(LowestDiffStr.c_str());
			LowestDiffTextBox->Text = LowestDiffOutput;
			string CurrGenStr = to_string(i+1);
			String^ CurrGenOutput = gcnew String(CurrGenStr.c_str());
			CurrentGenTextBox->Text = CurrGenOutput;
			string AvgDiffStr = to_string(Pop.GetAvergeDiff());
			String^ AvgDiffOutput = gcnew String(AvgDiffStr.c_str());
			AvgDiffTextBox->Text = AvgDiffOutput;
			if (Pop.GetCriteriaMet() == true) {
				break;
			}
			Pop.CreateNewGen();
			Update();
		}
		Pop.setLowestDiff(-1);

		//TestOnly 
		string test = Pop.PrintOutNewTree(Pop.GetBestCurrentIndividual());
		//string test2 = Pop.PrintOutNewTree(191);
		//string test2 = Pop.PrintOutResult(2);
		//string test3 = Pop.PrintOutTotalDistance(2);
		//string test4 = Pop.PrintOutNewTree(86);
		/*
		for (int j = 0; j < 200; j++)
		{
			string test5= Pop.PrintOutTree(j);
		}
		*/	
		ofstream myfile;
		myfile.open("example.txt");
		myfile << test;
		myfile.close();
		TestText->Text = "test";
		//TestOnly
		
		
		
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
};
}
