#pragma once
#include "Population.h"
#include "Individual.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
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
	
	protected:
	
	
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  LowestDiffTextBox;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  CurrentGenTextBox;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  AvgDiffTextBox;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  TotalNumOfGensTextbox;
	private: System::Windows::Forms::TextBox^  RunSuccessfulTextBox;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  popSizeTextBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  StartButton;
	private: System::Windows::Forms::Label^  TestText;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  NoOfGensTextBox;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  TestRangeBox1;

	private: System::Windows::Forms::TextBox^  TestRangeBox2;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  MaxTreeDepthTextBox;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  TreeGenComboBox;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::ComboBox^  SelectionComboBox;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  CrossoverRateTextBox;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  MutationRateTextbox;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;


	private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;

	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  BestFormulaTextBox;
private: System::Windows::Forms::TabControl^  tabControl2;
private: System::Windows::Forms::TabPage^  tabPage5;
private: System::Windows::Forms::TabPage^  tabPage6;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::TabPage^  tabPage7;
private: System::Windows::Forms::TabPage^  tabPage8;
private: System::Windows::Forms::TabPage^  tabPage9;
private: System::Windows::Forms::TabPage^  tabPage10;










private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::ComboBox^  FormulaComboBox;
private: System::Windows::Forms::ToolTip^  toolTip2;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label36;



private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;

private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel8;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Panel^  panel10;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  CrossoverRateWarning;

private: System::Windows::Forms::Label^  TestRangeWarning;

private: System::Windows::Forms::Label^  NoOfGensWarning;

private: System::Windows::Forms::Label^  PopSizeWarning;
private: System::Windows::Forms::Label^  Over100Warning;


private: System::Windows::Forms::Label^  MutationRateWarning;

private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Label^  MaxTreeWarning;
private: System::Windows::Forms::Panel^  TreePanel;
private: System::Windows::Forms::Label^  RunInProgressText;
private: System::Windows::Forms::Label^  RunUnssucessfulText;


















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->TotalNumOfGensTextbox = (gcnew System::Windows::Forms::TextBox());
			this->RunSuccessfulTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->AvgDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->CurrentGenTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->LowestDiffTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->TreePanel = (gcnew System::Windows::Forms::Panel());
			this->RunInProgressText = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->BestFormulaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->popSizeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->TestText = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NoOfGensTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TestRangeBox1 = (gcnew System::Windows::Forms::TextBox());
			this->TestRangeBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MaxTreeDepthTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TreeGenComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SelectionComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->CrossoverRateTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->MutationRateTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->MaxTreeWarning = (gcnew System::Windows::Forms::Label());
			this->Over100Warning = (gcnew System::Windows::Forms::Label());
			this->MutationRateWarning = (gcnew System::Windows::Forms::Label());
			this->CrossoverRateWarning = (gcnew System::Windows::Forms::Label());
			this->TestRangeWarning = (gcnew System::Windows::Forms::Label());
			this->NoOfGensWarning = (gcnew System::Windows::Forms::Label());
			this->PopSizeWarning = (gcnew System::Windows::Forms::Label());
			this->FormulaComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->RunUnssucessfulText = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel13->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->TreePanel->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel2->Controls->Add(this->TotalNumOfGensTextbox);
			this->panel2->Controls->Add(this->RunSuccessfulTextBox);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
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
			// TotalNumOfGensTextbox
			// 
			this->TotalNumOfGensTextbox->Enabled = false;
			this->TotalNumOfGensTextbox->Location = System::Drawing::Point(448, 67);
			this->TotalNumOfGensTextbox->Name = L"TotalNumOfGensTextbox";
			this->TotalNumOfGensTextbox->Size = System::Drawing::Size(100, 20);
			this->TotalNumOfGensTextbox->TabIndex = 9;
			// 
			// RunSuccessfulTextBox
			// 
			this->RunSuccessfulTextBox->Enabled = false;
			this->RunSuccessfulTextBox->Location = System::Drawing::Point(448, 18);
			this->RunSuccessfulTextBox->Name = L"RunSuccessfulTextBox";
			this->RunSuccessfulTextBox->Size = System::Drawing::Size(100, 20);
			this->RunSuccessfulTextBox->TabIndex = 8;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(320, 68);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(114, 13);
			this->label22->TabIndex = 7;
			this->label22->Text = L"Total Number of Gens:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(341, 21);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(88, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Run Successful\?";
			// 
			// AvgDiffTextBox
			// 
			this->AvgDiffTextBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->AvgDiffTextBox->Enabled = false;
			this->AvgDiffTextBox->Location = System::Drawing::Point(149, 115);
			this->AvgDiffTextBox->Name = L"AvgDiffTextBox";
			this->AvgDiffTextBox->Size = System::Drawing::Size(100, 20);
			this->AvgDiffTextBox->TabIndex = 5;
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
			this->LowestDiffTextBox->Location = System::Drawing::Point(149, 68);
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
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Location = System::Drawing::Point(256, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(725, 363);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->tabControl2);
			this->tabPage4->Controls->Add(this->label26);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(717, 337);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Info";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &GUI::tabPage4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(80, 19);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(544, 125);
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Controls->Add(this->tabPage9);
			this->tabControl2->Controls->Add(this->tabPage10);
			this->tabControl2->Location = System::Drawing::Point(0, 150);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(721, 191);
			this->tabControl2->TabIndex = 3;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel15);
			this->tabPage5->Controls->Add(this->panel13);
			this->tabPage5->Controls->Add(this->label67);
			this->tabPage5->Controls->Add(this->label43);
			this->tabPage5->Controls->Add(this->label66);
			this->tabPage5->Controls->Add(this->label59);
			this->tabPage5->Controls->Add(this->label58);
			this->tabPage5->Controls->Add(this->label37);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(713, 165);
			this->tabPage5->TabIndex = 0;
			this->tabPage5->Text = L"Instructions";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Black;
			this->panel15->Location = System::Drawing::Point(550, -2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(2, 168);
			this->panel15->TabIndex = 15;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Black;
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Location = System::Drawing::Point(247, -2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(2, 168);
			this->panel13->TabIndex = 14;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Black;
			this->panel14->Location = System::Drawing::Point(10, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(2, 168);
			this->panel14->TabIndex = 13;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(602, 3);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(70, 16);
			this->label67->TabIndex = 13;
			this->label67->Text = L"Glossary";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(349, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(53, 16);
			this->label43->TabIndex = 12;
			this->label43->Text = L"Pages";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(251, 16);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(303, 143);
			this->label66->TabIndex = 11;
			this->label66->Text = resources->GetString(L"label66.Text");
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(73, 4);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(86, 16);
			this->label59->TabIndex = 10;
			this->label59->Text = L"User Guide";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(6, 21);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(243, 130);
			this->label58->TabIndex = 3;
			this->label58->Text = resources->GetString(L"label58.Text");
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label58->Click += gcnew System::EventHandler(this, &GUI::label58_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(551, 19);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(163, 143);
			this->label37->TabIndex = 1;
			this->label37->Text = L"Inividual: This refers to a single\r\nmembe of the algorithm that is\r\nbeing evolove"
				L"d and evaluated\r\n\r\nPopulation: The current group\r\nof individuals\r\n\r\nGeneration: "
				L"A specific population\r\niteration.\r\n\r\n\r\n";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->panel9);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Controls->Add(this->label40);
			this->tabPage6->Controls->Add(this->label39);
			this->tabPage6->Controls->Add(this->pictureBox5);
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(713, 165);
			this->tabPage6->TabIndex = 1;
			this->tabPage6->Text = L"Initialize Population";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Black;
			this->panel9->Location = System::Drawing::Point(404, -2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(2, 168);
			this->panel9->TabIndex = 13;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(425, 21);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(293, 143);
			this->label35->TabIndex = 1;
			this->label35->Text = resources->GetString(L"label35.Text");
			this->label35->Click += gcnew System::EventHandler(this, &GUI::label35_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(480, 5);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(184, 32);
			this->label40->TabIndex = 6;
			this->label40->Text = L"Tree Generation Methods\r\n\r\n";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(75, 6);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(81, 16);
			this->label39->TabIndex = 5;
			this->label39->Text = L"Initilization\r\n";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(235, 5);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(173, 157);
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(6, 21);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(226, 104);
			this->label29->TabIndex = 0;
			this->label29->Text = resources->GetString(L"label29.Text");
			this->label29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label29->Click += gcnew System::EventHandler(this, &GUI::label29_Click);
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->panel8);
			this->tabPage7->Controls->Add(this->label36);
			this->tabPage7->Controls->Add(this->label42);
			this->tabPage7->Controls->Add(this->label41);
			this->tabPage7->Controls->Add(this->label38);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(713, 165);
			this->tabPage7->TabIndex = 2;
			this->tabPage7->Text = L"Evaluate Population";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->Location = System::Drawing::Point(212, 1);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(2, 168);
			this->panel8->TabIndex = 12;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(3, 31);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(208, 91);
			this->label36->TabIndex = 1;
			this->label36->Text = resources->GetString(L"label36.Text");
			this->label36->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(377, 5);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(173, 16);
			this->label42->TabIndex = 7;
			this->label42->Text = L"Specific Implementation\r\n";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(66, 6);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(81, 32);
			this->label41->TabIndex = 6;
			this->label41->Text = L"Evaluation\r\n\r\n";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(224, 28);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(483, 130);
			this->label38->TabIndex = 2;
			this->label38->Text = resources->GetString(L"label38.Text");
			this->label38->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label38->Click += gcnew System::EventHandler(this, &GUI::label38_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->panel7);
			this->tabPage8->Controls->Add(this->label46);
			this->tabPage8->Controls->Add(this->pictureBox6);
			this->tabPage8->Controls->Add(this->label47);
			this->tabPage8->Controls->Add(this->label44);
			this->tabPage8->Controls->Add(this->label45);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(713, 165);
			this->tabPage8->TabIndex = 3;
			this->tabPage8->Text = L"Selection";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Black;
			this->panel7->Location = System::Drawing::Point(212, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(2, 168);
			this->panel7->TabIndex = 11;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(384, 5);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(136, 16);
			this->label46->TabIndex = 8;
			this->label46->Text = L"Selection Methods";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(469, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(240, 159);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &GUI::pictureBox6_Click);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(216, 22);
			this->label47->Name = L"label47";
			this->label47->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label47->Size = System::Drawing::Size(256, 195);
			this->label47->TabIndex = 9;
			this->label47->Text = resources->GetString(L"label47.Text");
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(0, 24);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(214, 143);
			this->label44->TabIndex = 2;
			this->label44->Text = resources->GetString(L"label44.Text");
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(70, 5);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(73, 32);
			this->label45->TabIndex = 7;
			this->label45->Text = L"Selection\r\n\r\n";
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->label51);
			this->tabPage9->Controls->Add(this->panel10);
			this->tabPage9->Controls->Add(this->label50);
			this->tabPage9->Controls->Add(this->label48);
			this->tabPage9->Controls->Add(this->label49);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(713, 165);
			this->tabPage9->TabIndex = 4;
			this->tabPage9->Text = L"Crossover";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(252, 25);
			this->label51->Name = L"label51";
			this->label51->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label51->Size = System::Drawing::Size(450, 169);
			this->label51->TabIndex = 13;
			this->label51->Text = resources->GetString(L"label51.Text");
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Black;
			this->panel10->Location = System::Drawing::Point(239, -2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(2, 168);
			this->panel10->TabIndex = 12;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(398, 3);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(142, 16);
			this->label50->TabIndex = 10;
			this->label50->Text = L"Crossover Methods";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(11, 23);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(228, 143);
			this->label48->TabIndex = 8;
			this->label48->Text = resources->GetString(L"label48.Text");
			this->label48->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(80, 3);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(79, 16);
			this->label49->TabIndex = 9;
			this->label49->Text = L"Crossover";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->panel12);
			this->tabPage10->Controls->Add(this->panel11);
			this->tabPage10->Controls->Add(this->label57);
			this->tabPage10->Controls->Add(this->label56);
			this->tabPage10->Controls->Add(this->label55);
			this->tabPage10->Controls->Add(this->label54);
			this->tabPage10->Controls->Add(this->label53);
			this->tabPage10->Controls->Add(this->label52);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(713, 165);
			this->tabPage10->TabIndex = 5;
			this->tabPage10->Text = L"Mutation";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Black;
			this->panel12->Location = System::Drawing::Point(476, -2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(2, 168);
			this->panel12->TabIndex = 17;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Location = System::Drawing::Point(233, -2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(2, 168);
			this->panel11->TabIndex = 16;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(485, 21);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(217, 130);
			this->label57->TabIndex = 15;
			this->label57->Text = resources->GetString(L"label57.Text");
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(250, 20);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(220, 182);
			this->label56->TabIndex = 14;
			this->label56->Text = resources->GetString(L"label56.Text");
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(8, 24);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(215, 156);
			this->label55->TabIndex = 13;
			this->label55->Text = resources->GetString(L"label55.Text");
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(541, 5);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(101, 16);
			this->label54->TabIndex = 12;
			this->label54->Text = L"Reproduction";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(292, 4);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(129, 16);
			this->label53->TabIndex = 11;
			this->label53->Text = L"Mutation Methods";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(78, 4);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(66, 16);
			this->label52->TabIndex = 10;
			this->label52->Text = L"Mutation";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(272, 3);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(143, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Genetic Algorithm Flow Chart";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->label31);
			this->tabPage2->Controls->Add(this->label30);
			this->tabPage2->Controls->Add(this->panel5);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->label28);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(717, 337);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Current Best Graph";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Location = System::Drawing::Point(273, 33);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(147, 15);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Current Best Individual Graph";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(17, 257);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(71, 13);
			this->label31->TabIndex = 8;
			this->label31->Text = L"- Current Best";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(17, 241);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(89, 13);
			this->label30->TabIndex = 7;
			this->label30->Text = L"- Target Equation";
			this->label30->Click += gcnew System::EventHandler(this, &GUI::label30_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Black;
			this->panel5->Location = System::Drawing::Point(6, 260);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(10, 10);
			this->panel5->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Location = System::Drawing::Point(6, 243);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 10);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(0, 20);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(10, 10);
			this->panel4->TabIndex = 6;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(317, 316);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(63, 13);
			this->label28->TabIndex = 4;
			this->label28->Text = L"Test Values";
			this->label28->Click += gcnew System::EventHandler(this, &GUI::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(64, 135);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(37, 13);
			this->label27->TabIndex = 3;
			this->label27->Text = L"Result";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(107, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(486, 274);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label25);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(717, 337);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Average Difference Graph";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Location = System::Drawing::Point(282, 33);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(126, 15);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Average Distance Graph";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 150);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(99, 13);
			this->label33->TabIndex = 5;
			this->label33->Text = L"Average Difference";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(312, 315);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(96, 13);
			this->label32->TabIndex = 4;
			this->label32->Text = L"Current Generation";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(107, 39);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(486, 274);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->TreePanel);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(717, 337);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Tree View";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// TreePanel
			// 
			this->TreePanel->BackColor = System::Drawing::Color::White;
			this->TreePanel->Controls->Add(this->RunUnssucessfulText);
			this->TreePanel->Controls->Add(this->RunInProgressText);
			this->TreePanel->Location = System::Drawing::Point(123, 23);
			this->TreePanel->Name = L"TreePanel";
			this->TreePanel->Size = System::Drawing::Size(462, 236);
			this->TreePanel->TabIndex = 7;
			// 
			// RunInProgressText
			// 
			this->RunInProgressText->AutoSize = true;
			this->RunInProgressText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RunInProgressText->Location = System::Drawing::Point(163, 100);
			this->RunInProgressText->Name = L"RunInProgressText";
			this->RunInProgressText->Size = System::Drawing::Size(139, 20);
			this->RunInProgressText->TabIndex = 0;
			this->RunInProgressText->Text = L"Run In Progress\r\n";
			this->RunInProgressText->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Location = System::Drawing::Point(303, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(92, 15);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Current Best Tree";
			this->label23->Click += gcnew System::EventHandler(this, &GUI::label23_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gainsboro;
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->BestFormulaTextBox);
			this->panel6->Location = System::Drawing::Point(-4, 276);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(725, 61);
			this->panel6->TabIndex = 6;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(307, 4);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(105, 13);
			this->label34->TabIndex = 7;
			this->label34->Text = L"Current Best Formula";
			// 
			// BestFormulaTextBox
			// 
			this->BestFormulaTextBox->Enabled = false;
			this->BestFormulaTextBox->Location = System::Drawing::Point(238, 24);
			this->BestFormulaTextBox->Name = L"BestFormulaTextBox";
			this->BestFormulaTextBox->Size = System::Drawing::Size(231, 20);
			this->BestFormulaTextBox->TabIndex = 10;
			this->BestFormulaTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(111, 9);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(486, 261);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(77, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Setup Values";
			// 
			// popSizeTextBox
			// 
			this->popSizeTextBox->Location = System::Drawing::Point(102, 46);
			this->popSizeTextBox->Name = L"popSizeTextBox";
			this->popSizeTextBox->Size = System::Drawing::Size(100, 20);
			this->popSizeTextBox->TabIndex = 1;
			this->popSizeTextBox->Text = L"200";
			this->toolTip2->SetToolTip(this->popSizeTextBox, L"The number of individuals \r\n in each generation");
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
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(81, 498);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(75, 23);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &GUI::StartButton_Click);
			// 
			// TestText
			// 
			this->TestText->AutoSize = true;
			this->TestText->Location = System::Drawing::Point(166, 453);
			this->TestText->Name = L"TestText";
			this->TestText->Size = System::Drawing::Size(0, 13);
			this->TestText->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Max No of Gens:";
			// 
			// NoOfGensTextBox
			// 
			this->NoOfGensTextBox->Location = System::Drawing::Point(102, 82);
			this->NoOfGensTextBox->Name = L"NoOfGensTextBox";
			this->NoOfGensTextBox->Size = System::Drawing::Size(100, 20);
			this->NoOfGensTextBox->TabIndex = 6;
			this->NoOfGensTextBox->Text = L"500";
			this->toolTip2->SetToolTip(this->NoOfGensTextBox, L"The maximum number of generations \r\nthat can be created before the run\r\nis ended");
			this->NoOfGensTextBox->TextChanged += gcnew System::EventHandler(this, &GUI::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Target Formula:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Test Value Range:";
			// 
			// TestRangeBox1
			// 
			this->TestRangeBox1->Location = System::Drawing::Point(100, 148);
			this->TestRangeBox1->Name = L"TestRangeBox1";
			this->TestRangeBox1->Size = System::Drawing::Size(36, 20);
			this->TestRangeBox1->TabIndex = 10;
			this->TestRangeBox1->Text = L"0";
			this->toolTip2->SetToolTip(this->TestRangeBox1, resources->GetString(L"TestRangeBox1.ToolTip"));
			// 
			// TestRangeBox2
			// 
			this->TestRangeBox2->Location = System::Drawing::Point(165, 146);
			this->TestRangeBox2->Name = L"TestRangeBox2";
			this->TestRangeBox2->Size = System::Drawing::Size(36, 20);
			this->TestRangeBox2->TabIndex = 11;
			this->TestRangeBox2->Text = L"1";
			this->toolTip2->SetToolTip(this->TestRangeBox2, resources->GetString(L"TestRangeBox2.ToolTip"));
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(142, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"to";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(54, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 21);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Tree Generation";
			this->label7->Click += gcnew System::EventHandler(this, &GUI::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 209);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(87, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Max Tree Depth:";
			// 
			// MaxTreeDepthTextBox
			// 
			this->MaxTreeDepthTextBox->Location = System::Drawing::Point(102, 206);
			this->MaxTreeDepthTextBox->Name = L"MaxTreeDepthTextBox";
			this->MaxTreeDepthTextBox->Size = System::Drawing::Size(100, 20);
			this->MaxTreeDepthTextBox->TabIndex = 15;
			this->MaxTreeDepthTextBox->Text = L"2";
			this->toolTip2->SetToolTip(this->MaxTreeDepthTextBox, L"The maximum level that the each binary expression\r\ntree will grow to when they ar"
				L"e first created");
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 243);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Tree Gen Method:";
			// 
			// TreeGenComboBox
			// 
			this->TreeGenComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TreeGenComboBox->FormattingEnabled = true;
			this->TreeGenComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Full", L"Grow", L"Ramped Half & Half" });
			this->TreeGenComboBox->Location = System::Drawing::Point(102, 239);
			this->TreeGenComboBox->Name = L"TreeGenComboBox";
			this->TreeGenComboBox->Size = System::Drawing::Size(131, 21);
			this->TreeGenComboBox->TabIndex = 17;
			this->toolTip2->SetToolTip(this->TreeGenComboBox, L"The method the system will use to generate the binary \r\nexpression trees to popul"
				L"ate the first generation");
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(62, 269);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 21);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Reproduction";
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
			// SelectionComboBox
			// 
			this->SelectionComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SelectionComboBox->FormattingEnabled = true;
			this->SelectionComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Proportionate", L"Tournament" });
			this->SelectionComboBox->Location = System::Drawing::Point(102, 298);
			this->SelectionComboBox->Name = L"SelectionComboBox";
			this->SelectionComboBox->Size = System::Drawing::Size(131, 21);
			this->SelectionComboBox->TabIndex = 20;
			this->toolTip2->SetToolTip(this->SelectionComboBox, L"The method the system will use to select \r\nindividuals for reproduction");
			this->SelectionComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &GUI::comboBox2_SelectedIndexChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(2, 338);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(96, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Crossover Method:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Subtree" });
			this->comboBox3->Location = System::Drawing::Point(102, 333);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 21);
			this->comboBox3->TabIndex = 22;
			this->toolTip2->SetToolTip(this->comboBox3, L"The method the system will use to create a new individual by \r\ncrossing over the "
				L"features of two parent individuals");
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(6, 369);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Mutation Method:";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Subtree" });
			this->comboBox4->Location = System::Drawing::Point(102, 367);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 21);
			this->comboBox4->TabIndex = 24;
			this->toolTip2->SetToolTip(this->comboBox4, L"The method the system will use to create a new individual \r\nby randomly altering "
				L"a parent individual");
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 405);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(83, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Crossover Rate:";
			// 
			// CrossoverRateTextBox
			// 
			this->CrossoverRateTextBox->Location = System::Drawing::Point(101, 401);
			this->CrossoverRateTextBox->Name = L"CrossoverRateTextBox";
			this->CrossoverRateTextBox->Size = System::Drawing::Size(37, 20);
			this->CrossoverRateTextBox->TabIndex = 26;
			this->CrossoverRateTextBox->Text = L"95";
			this->toolTip2->SetToolTip(this->CrossoverRateTextBox, L"The percentage of each new generation that \r\nwill be generated via crossover");
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 438);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 13);
			this->label15->TabIndex = 27;
			this->label15->Text = L"Mutation Rate:";
			// 
			// MutationRateTextbox
			// 
			this->MutationRateTextbox->Location = System::Drawing::Point(101, 435);
			this->MutationRateTextbox->Name = L"MutationRateTextbox";
			this->MutationRateTextbox->Size = System::Drawing::Size(37, 20);
			this->MutationRateTextbox->TabIndex = 28;
			this->MutationRateTextbox->Text = L"1";
			this->toolTip2->SetToolTip(this->MutationRateTextbox, L"The percentage of each new generation that \r\nwill be generated via mutation");
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(141, 405);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 13);
			this->label16->TabIndex = 29;
			this->label16->Text = L"%";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(142, 439);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(15, 13);
			this->label17->TabIndex = 30;
			this->label17->Text = L"%";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->MaxTreeDepthTextBox);
			this->panel1->Controls->Add(this->MaxTreeWarning);
			this->panel1->Controls->Add(this->Over100Warning);
			this->panel1->Controls->Add(this->MutationRateWarning);
			this->panel1->Controls->Add(this->CrossoverRateWarning);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->TestRangeWarning);
			this->panel1->Controls->Add(this->NoOfGensWarning);
			this->panel1->Controls->Add(this->PopSizeWarning);
			this->panel1->Controls->Add(this->CrossoverRateTextBox);
			this->panel1->Controls->Add(this->FormulaComboBox);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->MutationRateTextbox);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->comboBox4);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->comboBox3);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->SelectionComboBox);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->TreeGenComboBox);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->TestRangeBox2);
			this->panel1->Controls->Add(this->TestRangeBox1);
			this->panel1->Controls->Add(this->label5);
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
			this->panel1->Size = System::Drawing::Size(319, 536);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::panel1_Paint);
			// 
			// MaxTreeWarning
			// 
			this->MaxTreeWarning->AutoSize = true;
			this->MaxTreeWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->MaxTreeWarning->Location = System::Drawing::Point(60, 225);
			this->MaxTreeWarning->Name = L"MaxTreeWarning";
			this->MaxTreeWarning->Size = System::Drawing::Size(183, 13);
			this->MaxTreeWarning->TabIndex = 49;
			this->MaxTreeWarning->Text = L"Input must be an integer between 1-4";
			this->MaxTreeWarning->Visible = false;
			// 
			// Over100Warning
			// 
			this->Over100Warning->AutoSize = true;
			this->Over100Warning->ForeColor = System::Drawing::Color::DarkRed;
			this->Over100Warning->Location = System::Drawing::Point(27, 466);
			this->Over100Warning->Name = L"Over100Warning";
			this->Over100Warning->Size = System::Drawing::Size(194, 26);
			this->Over100Warning->TabIndex = 48;
			this->Over100Warning->Text = L"The sum of the mutation and crossover \r\nrate must equal 100 or less";
			this->Over100Warning->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Over100Warning->Visible = false;
			// 
			// MutationRateWarning
			// 
			this->MutationRateWarning->AutoSize = true;
			this->MutationRateWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->MutationRateWarning->Location = System::Drawing::Point(48, 458);
			this->MutationRateWarning->Name = L"MutationRateWarning";
			this->MutationRateWarning->Size = System::Drawing::Size(200, 13);
			this->MutationRateWarning->TabIndex = 47;
			this->MutationRateWarning->Text = L"Inputs must be an integer between 1-100";
			this->MutationRateWarning->Visible = false;
			// 
			// CrossoverRateWarning
			// 
			this->CrossoverRateWarning->AutoSize = true;
			this->CrossoverRateWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->CrossoverRateWarning->Location = System::Drawing::Point(48, 422);
			this->CrossoverRateWarning->Name = L"CrossoverRateWarning";
			this->CrossoverRateWarning->Size = System::Drawing::Size(200, 13);
			this->CrossoverRateWarning->TabIndex = 46;
			this->CrossoverRateWarning->Text = L"Inputs must be an integer between 1-100";
			this->CrossoverRateWarning->Visible = false;
			this->CrossoverRateWarning->Click += gcnew System::EventHandler(this, &GUI::label63_Click);
			// 
			// TestRangeWarning
			// 
			this->TestRangeWarning->AutoSize = true;
			this->TestRangeWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->TestRangeWarning->Location = System::Drawing::Point(0, 166);
			this->TestRangeWarning->Name = L"TestRangeWarning";
			this->TestRangeWarning->Size = System::Drawing::Size(260, 26);
			this->TestRangeWarning->TabIndex = 45;
			this->TestRangeWarning->Text = L"Inputs must be integer, range cannot be bigger than 3\r\n\r\n";
			this->TestRangeWarning->Visible = false;
			this->TestRangeWarning->Click += gcnew System::EventHandler(this, &GUI::label62_Click);
			// 
			// NoOfGensWarning
			// 
			this->NoOfGensWarning->AutoSize = true;
			this->NoOfGensWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->NoOfGensWarning->Location = System::Drawing::Point(53, 99);
			this->NoOfGensWarning->Name = L"NoOfGensWarning";
			this->NoOfGensWarning->Size = System::Drawing::Size(201, 13);
			this->NoOfGensWarning->TabIndex = 44;
			this->NoOfGensWarning->Text = L"Input must be an integer between 1-2000\r\n";
			this->NoOfGensWarning->Visible = false;
			// 
			// PopSizeWarning
			// 
			this->PopSizeWarning->AutoSize = true;
			this->PopSizeWarning->ForeColor = System::Drawing::Color::DarkRed;
			this->PopSizeWarning->Location = System::Drawing::Point(53, 66);
			this->PopSizeWarning->Name = L"PopSizeWarning";
			this->PopSizeWarning->Size = System::Drawing::Size(195, 13);
			this->PopSizeWarning->TabIndex = 43;
			this->PopSizeWarning->Text = L"Input must be an integer between 1-500";
			this->PopSizeWarning->Visible = false;
			// 
			// FormulaComboBox
			// 
			this->FormulaComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->FormulaComboBox->FormattingEnabled = true;
			this->FormulaComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"X*X+(X-1)", L"(X*X+(X-1))*2" });
			this->FormulaComboBox->Location = System::Drawing::Point(100, 115);
			this->FormulaComboBox->Name = L"FormulaComboBox";
			this->FormulaComboBox->Size = System::Drawing::Size(131, 21);
			this->FormulaComboBox->TabIndex = 42;
			this->toolTip2->SetToolTip(this->FormulaComboBox, L"The formula that the genetic \r\nalgorithm will try to emulate");
			// 
			// toolTip2
			// 
			this->toolTip2->AutoPopDelay = 10000;
			this->toolTip2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toolTip2->InitialDelay = 500;
			this->toolTip2->IsBalloon = true;
			this->toolTip2->ReshowDelay = 100;
			// 
			// RunUnssucessfulText
			// 
			this->RunUnssucessfulText->AutoSize = true;
			this->RunUnssucessfulText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RunUnssucessfulText->Location = System::Drawing::Point(162, 104);
			this->RunUnssucessfulText->Name = L"RunUnssucessfulText";
			this->RunUnssucessfulText->Size = System::Drawing::Size(155, 40);
			this->RunUnssucessfulText->TabIndex = 1;
			this->RunUnssucessfulText->Text = L"Run Unsuccessful\r\n\r\n";
			this->RunUnssucessfulText->Visible = false;
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			this->ClientSize = System::Drawing::Size(978, 537);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"GUI";
			this->Text = L"GUI";
			this->Load += gcnew System::EventHandler(this, &GUI::GUI_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->TreePanel->ResumeLayout(false);
			this->TreePanel->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GUI_Load(System::Object^  sender, System::EventArgs^  e) {
		TreeGenComboBox->SelectedIndex = 0;
		SelectionComboBox->SelectedIndex = 0;
		FormulaComboBox->SelectedIndex = 0;
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::pictureBox1_Paint);
		pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::pictureBox1_Paint);
	}
	void pictureBox1_Paint(Object^, System::Windows::Forms::PaintEventArgs^ e)
	{
		Graphics^ g = e->Graphics;
		Point Point1 = Point(40, 240);
		Point Point2 = Point(445, 240);
		Point Point3 = Point(60, 260);
		Point Point4 = Point(60, 20);
		g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
		g->DrawLine(System::Drawing::Pens::Black, Point3, Point4);

		

	}


	array<Point>^ CurrentBestResultArray = gcnew array<Point>(30);
	void UpdateGraph1(Object^, System::Windows::Forms::PaintEventArgs^ e)
	{
		
		String^ TestRangeInput1 = TestRangeBox1->Text;
		String^ TestRangeInput2 = TestRangeBox2->Text;
		int TestRange1Int = Convert::ToInt16(TestRangeInput1);
		int TestRange2Int = Convert::ToInt16(TestRangeInput2);
		float TestRange1Value = TestRange1Int;
		float TestRange2Value = TestRange2Int;
		int Diff = abs(TestRange1Value - TestRange2Value);
		
		vector<float> TestRange(Diff * 10);
		float CurrentValue = TestRange1Value;
		for (int i = 0; i < Diff * 10; i++) {			
			CurrentValue = CurrentValue + 0.1;
			TestRange[i] = CurrentValue;
		}

		float Interval = 400 / (Diff*10);
		Graphics^ g = e->Graphics;
		//Draws the X Axis notches
		for (int i = 0; i < Diff * 10; i++) {
			Point point1 = Point(80 + (Interval * i), 230);
			Point point2 = Point(80 + (Interval * i), 250);
			Point point3 = Point((80 + (Interval * i))-7, 250);
			float roundedFloat = roundf(TestRange[i] * 10) / 10;
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);

			g->DrawString(roundedFloat.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			
		}
	


		//Calculates the results for each test value
		vector<float> TargetValues(Diff * 10);
		if (FormulaComboBox->SelectedIndex == 0)
		{

			for (int i = 0; i < Diff * 10; i++) {
				float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
				result = roundf(result * 100) / 100;
				TargetValues[i] = result;
			}
		}
		if (FormulaComboBox->SelectedIndex == 1)
		{

			for (int i = 0; i < Diff * 10; i++) {
				float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
				result = result * 2;
				result = roundf(result * 100) / 100;				
				TargetValues[i] = result;
			}
		}


		//Gets the lowest and highest target values
		int LowestIndex = -1;
		int HighestIndex = -1;
		for (int i = 0; i < Diff * 10; i++) {
			if (LowestIndex == -1) {
				LowestIndex = i;
				HighestIndex = i;
			}
			else if (TargetValues[i] < TargetValues[LowestIndex]) {
				LowestIndex = i;
			}
			else if (TargetValues[i] > TargetValues[HighestIndex]) {
				HighestIndex = i;
			}
		}
		float LowestValue = TargetValues[LowestIndex];
		float HighestValue = TargetValues[HighestIndex];
		float HigLowDiff = HighestValue - LowestValue;
		//Draws the Y Axis notches
		float Interval2 = 230 / (Diff * 10) / 2;
		for (int i = 0; i < 5; i++) {
			Point point1 = Point(50, 40+ (Interval * i));
			Point point2 = Point(70, 40 + (Interval * i));
			Point point3 = Point(15, (40 + (Interval * i))-7);
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
			float AxisLabel = LowestValue + ((HigLowDiff / 5)*(5-i));			
			g->DrawString(AxisLabel.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			
		}
		Point point1 = Point(60, 40);
		Point point2 = Point(60, 240);

		//Normalizes the target values to the size of the Y axis in pixels
		vector<float> NormalizedTargetValues(Diff * 10);
		float NormalizedValue = 0;
		for (int i = 0; i < Diff * 10; i++) {
			NormalizedValue = 0;
			NormalizedValue = (TargetValues[i] - LowestValue)*(200 - 0);
			NormalizedValue = NormalizedValue / (HighestValue - LowestValue) + 1;
			NormalizedTargetValues[i] = NormalizedValue;
		}
		//Draws the graphline for the target equation
		array<Point>^ PointsArray = gcnew array<Point>(Diff*10);
		Point currentPoint;
		for (int i = 0; i < Diff * 10; i++) {
			Point NewPoint = Point(80 + (Interval * i), 240 - NormalizedTargetValues[i]);
			PointsArray[i] = NewPoint;
		}		
		g->DrawCurve(System::Drawing::Pens::Red, PointsArray);
	}
	
	void UpdateGraph2(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->DrawCurve(System::Drawing::Pens::Black, CurrentBestResultArray);
	}

	
	void UpdateGraph3(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		//Draws the X Axis notches
		for (int i = 0; i < 10; i++) {
			Point point1 = Point(80 + (40 * i), 230);
			Point point2 = Point(80 + (40 * i), 250);
			Point point3 = Point((80 + (40 * i)) - 7, 250);			
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
			int LabelValue = (MaxGen / 10) *(i + 1);
			g->DrawString(LabelValue.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
		}

		//Draws the Y Axis notches
		for (int i = 0; i < 5; i++) {
			Point point1 = Point(50, 40 + (40 * i));
			Point point2 = Point(70, 40 + (40 * i));
			Point point3 = Point(15, (40 + (40 * i)) - 7);
			g->DrawLine(System::Drawing::Pens::Black, point1, point2);
		}
	}

	float CurrentAverageDistance;
	float MaxAverage;
	int CurrentGeneration;
	int MaxGen;
	int CurrentArrayIndex = 0;
	array<Point>^ PointsArray;
	bool FirstRun = true;
	array<String^>^ Lables = gcnew array<String^>(5);
	void UpdateGraph4(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;

		if (FirstRun == true)
		{
			float AxisMax = CurrentAverageDistance + 10;
			MaxAverage = AxisMax;
			float Interval = AxisMax / 5;
			//Draws the labels for the Y Axis notches
			for (int i = 0; i < 5; i++) {	
				Point point3 = Point(15, (40 + (40 * i)) - 7);
				float AxisLabel = Interval * (5 - i);
				float RoundedAxisLabel = roundf(AxisLabel * 10) / 10;
				g->DrawString(RoundedAxisLabel.ToString(), gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
				Lables[i] = RoundedAxisLabel.ToString();
			}
			FirstRun = false;
		}
		else {
			
			for (int i = 0; i < 5; i++) {
				Point point3 = Point(15, (40 + (40 * i)) - 7);
				g->DrawString(Lables[i], gcnew System::Drawing::Font("Arial", 10), System::Drawing::Brushes::Black, point3);
			}
		}
	}

	Point PreviousPoint;
	void UpdateGraph5(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		float NormalizedValue1 = 0;
		NormalizedValue1 = (CurrentAverageDistance)*(200);
		NormalizedValue1 = NormalizedValue1 / (MaxAverage)+1;
		float NormalizedValue2 = 0;
		NormalizedValue2 = (CurrentGeneration)*(385);
		NormalizedValue2 = NormalizedValue2 / (MaxGen)+1;
		if (PreviousPoint.IsEmpty) {
			
			Point Point1 = Point(60, 240 - NormalizedValue1);
			Point Point2 = Point(60 + NormalizedValue2, 240 - NormalizedValue1);
			PreviousPoint = Point2;
			g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
			PointsArray[CurrentArrayIndex] = Point1;
			CurrentArrayIndex = CurrentArrayIndex + 1;
			PointsArray[CurrentArrayIndex] = Point2;
			CurrentArrayIndex = CurrentArrayIndex + 1;
			
		}
		else {
			float NormalizedValue2 = 0;
			NormalizedValue2 = (CurrentGeneration)*(385);
			NormalizedValue2 = NormalizedValue2 / (MaxGen)+1;
			Point Point1 = PreviousPoint;
			Point Point2 = Point(60 + NormalizedValue2, 240 - NormalizedValue1);
			//g->DrawLine(System::Drawing::Pens::Black, Point1, Point2);
			PreviousPoint = Point2;
			if (CurrentArrayIndex < MaxGen * 2)
			{
				PointsArray[CurrentArrayIndex] = Point1;
				CurrentArrayIndex = CurrentArrayIndex + 1;
				PointsArray[CurrentArrayIndex] = Point2;
				CurrentArrayIndex = CurrentArrayIndex + 1;
				for (int i = 0; i < CurrentGeneration * 2; i++) {
					if (i % 2 == 0)
					{
						if (PointsArray[i].Y >= 20 && PointsArray[i + 1].Y >= 20)
						{
							g->DrawLine(System::Drawing::Pens::Black, PointsArray[i], PointsArray[i + 1]);
						}
					}
				}
			}
			else {
				for (int i = 0; i < CurrentGeneration * 2; i++) {
					if (i % 2 == 0)
					{
						if (PointsArray[i].Y >= 20 && PointsArray[i + 1].Y >= 20)
						{
							g->DrawLine(System::Drawing::Pens::Black, PointsArray[i], PointsArray[i + 1]);
						}
					}
				}
			}
		}

	}
	array<String^>^ Nodes;
	int CurrentIndex;
	int CurrentIndex2;
	int CurrentLevel;
	int NumOfNodes;
	int MaxLevel = 5;
	array<Point>^ NodesPoints;
	bool ToolTipShown = false;
	int CurrentToolip = 0;


	//COUNT NODES BENEATH EACH LEAF BEFORE POSITIONING ITS CHILDREN, BASE POS OFF NUM OF NODE BENEATH
	void DrawTree(string Position, Point LastPoint) {
		CurrentLevel = CurrentLevel + 1;
		CurrentIndex = CurrentIndex + 1;
		Point NewPoint = LastPoint;
		if (Position == "Center")
		{
			NodesPoints[CurrentIndex] = NewPoint;
		}
		else if (Position == "Left") {
			NewPoint.X = NewPoint.X - 20 * (MaxLevel - CurrentLevel);
			NewPoint.Y = NewPoint.Y + 50;
			NodesPoints[CurrentIndex] = NewPoint;
		}
		else if (Position == "Right") {
			NewPoint.X = NewPoint.X + 20 * (MaxLevel - CurrentLevel);
			NewPoint.Y = NewPoint.Y + 50;
			NodesPoints[CurrentIndex] = NewPoint;
		}
		
		if (Nodes[CurrentIndex] == "-" || Nodes[CurrentIndex] == "+" || Nodes[CurrentIndex] == "*" || Nodes[CurrentIndex] == "%")
		{
			DrawTree("Left", NewPoint);

			DrawTree("Right", NewPoint);
		}
		CurrentLevel = CurrentLevel - 1;
	}
	String^ CurrentBestFormula;
	void CompileBestFormula() {
		CurrentIndex2 = CurrentIndex2 + 1;
		String^ CurrentNode = Nodes[CurrentIndex2];
		if (Nodes[CurrentIndex2] == "-" || Nodes[CurrentIndex2] == "+" || Nodes[CurrentIndex2] == "*" || Nodes[CurrentIndex2] == "%") {
			CurrentBestFormula = CurrentBestFormula + "(";
			CompileBestFormula();
			CurrentBestFormula = CurrentBestFormula + CurrentNode;
			CompileBestFormula();
			CurrentBestFormula = CurrentBestFormula + ")";
		}
		else {
			CurrentBestFormula = CurrentBestFormula + CurrentNode;
		}
	}


	void UpdateGraph6(Object^, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		for (int i = 0; i < NumOfNodes; i++) {
			if (NodesPoints[i].X > 0) {


				g->DrawString(Nodes[i], gcnew System::Drawing::Font("Arial", 20), System::Drawing::Brushes::Black, NodesPoints[i]);
				Pen^ NewPen = gcnew Pen(Color::Black, 2);
				g->DrawEllipse(NewPen, NodesPoints[i].X - 2, NodesPoints[i].Y, 36, 36);
			}
		}
		
	}

	bool FirstPass = true;
	private: System::Void StartButton_Click(System::Object^  sender, System::EventArgs^  e) {
		FirstRun = true;
		CurrentGeneration = 0;
		CurrentArrayIndex = 0;
		CurrentIndex = -1;
		CurrentIndex2 = -1;
		CurrentLevel = 0;
		PopSizeWarning->Visible = false;
		NoOfGensWarning->Visible = false;
		TestRangeWarning->Visible = false;
		MaxTreeWarning->Visible = false;
		CrossoverRateWarning->Visible = false;
		MutationRateWarning->Visible = false;
		Over100Warning->Visible = false;
		RunUnssucessfulText->Visible = false;
		RunInProgressText->Visible = true;
		TreePanel->Visible = true;
		string TempArray[300] = {};
		Nodes = gcnew array<String^>(300);
		NodesPoints = gcnew array<Point>(300);
		pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph1);
		pictureBox1->Refresh();		
		pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph3);
		pictureBox2->Refresh();
		bool InputsValid = true;
		String^ PopSizeInput = popSizeTextBox->Text;
		String^ MaxNoOfGensInput = NoOfGensTextBox->Text;
		String^ TestRangeInput1 = TestRangeBox1->Text;
		String^ TestRangeInput2 = TestRangeBox2->Text;
		String^ MaxTreeDepthInput = MaxTreeDepthTextBox->Text;
		String^ CrossoverRateInput = CrossoverRateTextBox->Text;
		String^ MutationRateInput = MutationRateTextbox->Text;
		int CrossoverRate=0;		
		int MutationRate = 0;
		int MaxTreeDepth = 0;
		int TestRange1Int = 0;
		int TestRange2Int = 0;
		int MaxPopSize = 0;
		int MaxNoOfGens = 0;
		try {
			MaxPopSize = Convert::ToInt16(PopSizeInput);
		}
		catch (FormatException^ e) {
			InputsValid = false;
			PopSizeWarning->Visible = true;
		}
		try {
			MaxNoOfGens = Convert::ToInt16(MaxNoOfGensInput);
		}
		catch (FormatException^ e) {
			InputsValid = false;
			NoOfGensWarning->Visible = true;
		}
		try {
			TestRange1Int = Convert::ToInt16(TestRangeInput1);
			TestRange2Int = Convert::ToInt16(TestRangeInput2);;
		}
		catch (FormatException^ e) {
			InputsValid = false;
			TestRangeWarning->Visible = true;
		}
		try {
			MaxTreeDepth = Convert::ToInt16(MaxTreeDepthInput);
		}
		catch (FormatException^ e) {
			InputsValid = false;
			MaxTreeWarning->Visible = true;
		}
		try {
			CrossoverRate = Convert::ToInt16(CrossoverRateInput);
		}
		catch (FormatException^ e) {
			InputsValid = false;
			CrossoverRateWarning->Visible = true;
		}
		try {
			MutationRate = Convert::ToInt16(MutationRateInput);
		}
		catch (FormatException^ e) {
			InputsValid = false;
			MutationRateWarning->Visible = true;
		}



		int PopSizeMax = 500;
		int GenSizeMax = 2000;
		int TestRangeSizeMax = 3;
		int TreeDepthMax = 4;
		int CrossoverRateMax = 100;
		int MutationRateMax = 100;

		if (MaxPopSize > PopSizeMax) {
			InputsValid = false;
			PopSizeWarning->Visible = true;
		}
		if (MaxNoOfGens > GenSizeMax) {
			InputsValid = false;
			NoOfGensWarning->Visible = true;
		}
		if ((abs(TestRange1Int - TestRange2Int)) > TestRangeSizeMax)
		{
			InputsValid = false;
			TestRangeWarning->Visible = true;
		}
		if (MaxTreeDepth > TreeDepthMax) {
			InputsValid = false;
			MaxTreeWarning->Visible = true;
		}
		if (CrossoverRate > CrossoverRateMax) {
			InputsValid = false;
			CrossoverRateWarning->Visible = true;
		}
		if (MutationRate > MutationRateMax) {
			InputsValid = false;
			MutationRateWarning->Visible = true;
		}
		if ((CrossoverRate + MutationRate) > CrossoverRateMax) {
			InputsValid = false;
			Over100Warning->Visible = true;
		}
		



		MaxGen = MaxNoOfGens;
		PointsArray = gcnew array<Point>(MaxGen*2);				
		int ChosenTreeGenMethod = TreeGenComboBox->SelectedIndex;
		int ChosenSelectionMethod = SelectionComboBox->SelectedIndex;		
		float TestRange1Value = TestRange1Int;
		float TestRange2Value = TestRange2Int;
		int Diff = abs(TestRange1Value - TestRange2Value);
		
		
		if (InputsValid)
		{
			
			PopSizeWarning->Visible = false;
			NoOfGensWarning->Visible = false;
			TestRangeWarning->Visible = false;
			MaxTreeWarning->Visible = false;
			CrossoverRateWarning->Visible = false;
			MutationRateWarning->Visible = false;
			Over100Warning->Visible = false;
		
			float Interval = 400 / (Diff * 10);
			bool First = true;
			//Populates the TestRange vector
			vector<float> TestRange(Diff * 10);
			float CurrentValue = TestRange1Value;
			for (int i = 0; i < Diff * 10; i++) {
				CurrentValue = CurrentValue + 0.1;
				TestRange[i] = CurrentValue;
			}
			//Calculates the results for each test value
			vector<float> TargetValues(Diff * 10);
			if (FormulaComboBox->SelectedIndex == 0)
			{

				for (int i = 0; i < Diff * 10; i++) {
					float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
					result = roundf(result * 100) / 100;
					TargetValues[i] = result;
				}
			}
			if (FormulaComboBox->SelectedIndex == 1)
			{

				for (int i = 0; i < Diff * 10; i++) {
					float result = TestRange[i] * TestRange[i] + (TestRange[i] - 1);
					result = result * 2;
					result = roundf(result * 100) / 100;
					TargetValues[i] = result;
				}
			}
			//Gets the lowest and highest target values
			int LowestIndex = -1;
			int HighestIndex = -1;
			for (int i = 0; i < Diff * 10; i++) {
				if (LowestIndex == -1) {
					LowestIndex = i;
					HighestIndex = i;
				}
				else if (TargetValues[i] < TargetValues[LowestIndex]) {
					LowestIndex = i;
				}
				else if (TargetValues[i] > TargetValues[HighestIndex]) {
					HighestIndex = i;
				}
			}
			float LowestValue = TargetValues[LowestIndex];
			float HighestValue = TargetValues[HighestIndex];



			Population Pop(MaxPopSize, MaxTreeDepth, CrossoverRate, MutationRate, ChosenTreeGenMethod, ChosenSelectionMethod, FormulaComboBox->SelectedIndex, TestRange1Value, TestRange2Value);
			Pop.Generate();
			bool SolutionFound = false;
			for (int i = 0; i < MaxNoOfGens; i++)
			{

				Pop.Evaluate();
				vector<float> CurrentBestResults = Pop.GetCurrentBestResults();
				vector<float> NormalizedResults(Diff * 10);
				float NormalizedValue = 0;
				for (int i = 0; i < Diff * 10; i++) {
					NormalizedValue = 0;
					NormalizedValue = (CurrentBestResults[i] - LowestValue)*(200 - 0);
					NormalizedValue = NormalizedValue / (HighestValue - LowestValue) + 1;
					NormalizedResults[i] = NormalizedValue;
				}
				Point CurrentPoint;
				for (int i = 0; i < 30; i++) {
					if (i < Diff * 10)
					{
						Point NewPoint = Point(80 + (Interval * i), 240 - NormalizedResults[i] + 1);
						CurrentBestResultArray[i] = NewPoint;
						CurrentPoint = NewPoint;
					}
					else {
						CurrentBestResultArray[i] = CurrentPoint;
					}
				}
				if (FirstPass == true)
				{
					pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph2);
				}
				pictureBox1->Refresh();
				CurrentAverageDistance = Pop.GetAvergeDiff();
				CurrentGeneration = i + 1;
				if (First == true && FirstPass == true)
				{
					pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph4);
					pictureBox2->Refresh();

				}
				if (First == true && FirstPass == true)
				{
					pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph5);
					First = false;
				}
				pictureBox2->Refresh();
				/*
				Individual test = Pop.GetBestCurrentIndividualObj();
				string test2 = test.PrintTree(1);
				int BestIndividualIndex = Pop.GetBestCurrentIndividual();
				string TreeString = Pop.PrintOutNewTree(BestIndividualIndex);
				NumOfNodes = count(TreeString.begin(), TreeString.end(), ' ');
				//MaxLevel = NumOfNodes/5;
				stringstream ss(TreeString);

				while (ss.good() && i < NumOfNodes) {

					ss >> TempArray[i];
					++i;
				}
				for (int i = 0; i < NumOfNodes; i++) {
					Nodes[i] = gcnew String(TempArray[i].c_str());
				}
				CurrentIndex = -1;
				CurrentIndex2 = -1;
				CurrentLevel = 0;

				Point StartPoint = Point(225, 20);

				DrawTree("Center", StartPoint);
				if (First == true && FirstPass == true)
				{
					pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph6);
					First = false;
				}
				pictureBox3->Refresh();
				
				CurrentBestFormula = "";
				CompileBestFormula();
				BestFormulaTextBox->Text = CurrentBestFormula;
				*/
				string LowestDiffStr = to_string(Pop.GetLowestDiff());
				double dobuleValue = Pop.GetLowestDiff();
				Decimal decimalValue = System::Convert::ToDecimal(dobuleValue);
				String^ LowestDiffOutput = gcnew String(decimalValue.ToString());
				LowestDiffTextBox->Text = LowestDiffOutput;
				string CurrGenStr = to_string(i + 1);
				String^ CurrGenOutput = gcnew String(CurrGenStr.c_str());
				CurrentGenTextBox->Text = CurrGenOutput;
				string AvgDiffStr = to_string(Pop.GetAvergeDiff());
				String^ AvgDiffOutput = gcnew String(AvgDiffStr.c_str());
				AvgDiffTextBox->Text = AvgDiffOutput;
				Update();
				if (Pop.GetCriteriaMet() == true) {
					TreePanel->Visible = false;
					RunInProgressText->Visible = false;
					SolutionFound = true;
					Individual test = Pop.GetBestCurrentIndividualObj();
					string test2 = test.PrintTree(1);
					int BestIndividualIndex = Pop.GetBestCurrentIndividual();
					string TreeString = Pop.PrintOutNewTree(BestIndividualIndex);
					NumOfNodes = count(TreeString.begin(), TreeString.end(), ' ');
					stringstream ss(TreeString);
					int j = 0;
					while (ss.good() && j < NumOfNodes) {
						ss >> TempArray[j];
						++j;
					}
					for (int i = 0; i < NumOfNodes; i++) {
						Nodes[i] = gcnew String(TempArray[i].c_str());
					}
					CurrentIndex = -1;
					CurrentIndex2 = -1;
					CurrentLevel = 0;
					Point StartPoint = Point(225, 20);
					DrawTree("Center", StartPoint);					
					pictureBox3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GUI::UpdateGraph6);					
					pictureBox3->Refresh();

					CurrentBestFormula = "";
					CompileBestFormula();
					BestFormulaTextBox->Text = CurrentBestFormula;
					break;
				}
				Pop.CreateNewGen();

			}

			if (SolutionFound == true) {
				RunSuccessfulTextBox->Text = "Yes";
			}
			else
			{
				RunSuccessfulTextBox->Text = "No";
				RunInProgressText->Visible = false;
				RunUnssucessfulText->Visible = true;
			}
			TotalNumOfGensTextbox->Text = CurrentGenTextBox->Text;
			CurrentGenTextBox->Text = "0";
			Pop.setLowestDiff(-1);

			/*

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

			ofstream myfile;
			myfile.open("example.txt");
			myfile << test;
			myfile.close();
			//TestOnly
			*/
			FirstPass = false;
		}
		
	}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label30_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label23_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void toolTip2_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
private: System::Void toolTip2_Popup_1(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}

private: System::Void label38_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label43_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label29_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label58_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label63_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label62_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
