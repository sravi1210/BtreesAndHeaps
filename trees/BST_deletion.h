


#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace trees {

	/// <summary>
	/// Summary for BST_deletion
	/// </summary>
	public ref class BST_deletion : public System::Windows::Forms::UserControl
	{
	public:
		BST_deletion(void)
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
		~BST_deletion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BTree_delete_but;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  BTree_stop_but;


	private: System::Windows::Forms::RadioButton^  RB1;
	private: System::Windows::Forms::RadioButton^  RB2;
	private: System::Windows::Forms::RadioButton^  RB3;


	private: System::Windows::Forms::Panel^  delete_animation1;
	private: System::Windows::Forms::Label^  DL1;
	private: System::Windows::Forms::Label^  DL2;
	private: System::Windows::Forms::Label^  DL3;
	private: System::Windows::Forms::Label^  DL7;



	private: System::Windows::Forms::Label^  DL6;

	private: System::Windows::Forms::Label^  DL4;
	private: System::Windows::Forms::Label^  DL5;
	private: System::Windows::Forms::Label^  Infolabel;

	private: System::Windows::Forms::Label^  Checklabel;
	private: System::Windows::Forms::Timer^  BTdeletetimer1;
	private: System::Windows::Forms::Timer^  BTdeletetimer2;
	private: System::Windows::Forms::Timer^  BTdeletetimer3;



	private: System::ComponentModel::IContainer^  components;















	protected: 

	protected: 

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
			this->BTree_delete_but = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RB2 = (gcnew System::Windows::Forms::RadioButton());
			this->RB3 = (gcnew System::Windows::Forms::RadioButton());
			this->RB1 = (gcnew System::Windows::Forms::RadioButton());
			this->BTree_stop_but = (gcnew System::Windows::Forms::Button());
			this->delete_animation1 = (gcnew System::Windows::Forms::Panel());
			this->Checklabel = (gcnew System::Windows::Forms::Label());
			this->Infolabel = (gcnew System::Windows::Forms::Label());
			this->DL2 = (gcnew System::Windows::Forms::Label());
			this->DL3 = (gcnew System::Windows::Forms::Label());
			this->DL7 = (gcnew System::Windows::Forms::Label());
			this->DL6 = (gcnew System::Windows::Forms::Label());
			this->DL4 = (gcnew System::Windows::Forms::Label());
			this->DL5 = (gcnew System::Windows::Forms::Label());
			this->DL1 = (gcnew System::Windows::Forms::Label());
			this->BTdeletetimer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BTdeletetimer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BTdeletetimer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1->SuspendLayout();
			this->delete_animation1->SuspendLayout();
			this->SuspendLayout();
			// 
			// BTree_delete_but
			// 
			this->BTree_delete_but->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BTree_delete_but->Location = System::Drawing::Point(19, 183);
			this->BTree_delete_but->Name = L"BTree_delete_but";
			this->BTree_delete_but->Size = System::Drawing::Size(141, 49);
			this->BTree_delete_but->TabIndex = 0;
			this->BTree_delete_but->Text = L"Delete";
			this->BTree_delete_but->UseVisualStyleBackColor = true;
			this->BTree_delete_but->Click += gcnew System::EventHandler(this, &BST_deletion::BTree_delete_but_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RB2);
			this->groupBox1->Controls->Add(this->RB3);
			this->groupBox1->Controls->Add(this->RB1);
			this->groupBox1->Controls->Add(this->BTree_stop_but);
			this->groupBox1->Controls->Add(this->BTree_delete_but);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(879, 372);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(356, 254);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Select One To See Animation";
			// 
			// RB2
			// 
			this->RB2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB2->Location = System::Drawing::Point(46, 75);
			this->RB2->Name = L"RB2";
			this->RB2->Size = System::Drawing::Size(256, 38);
			this->RB2->TabIndex = 4;
			this->RB2->Text = L"Delete Node With One Child";
			this->RB2->UseVisualStyleBackColor = true;
			// 
			// RB3
			// 
			this->RB3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB3->Location = System::Drawing::Point(46, 121);
			this->RB3->Name = L"RB3";
			this->RB3->Size = System::Drawing::Size(233, 38);
			this->RB3->TabIndex = 3;
			this->RB3->Text = L"Delete Node With Two Child";
			this->RB3->UseVisualStyleBackColor = true;
			// 
			// RB1
			// 
			this->RB1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RB1->Location = System::Drawing::Point(46, 33);
			this->RB1->Name = L"RB1";
			this->RB1->Size = System::Drawing::Size(167, 32);
			this->RB1->TabIndex = 2;
			this->RB1->Text = L"Delete Leaf Node";
			this->RB1->UseVisualStyleBackColor = true;
			// 
			// BTree_stop_but
			// 
			this->BTree_stop_but->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BTree_stop_but->Location = System::Drawing::Point(186, 183);
			this->BTree_stop_but->Name = L"BTree_stop_but";
			this->BTree_stop_but->Size = System::Drawing::Size(152, 49);
			this->BTree_stop_but->TabIndex = 1;
			this->BTree_stop_but->Text = L"Stop";
			this->BTree_stop_but->UseVisualStyleBackColor = true;
			this->BTree_stop_but->Click += gcnew System::EventHandler(this, &BST_deletion::BTree_stop_but_Click);
			// 
			// delete_animation1
			// 
			this->delete_animation1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->delete_animation1->Controls->Add(this->Checklabel);
			this->delete_animation1->Controls->Add(this->Infolabel);
			this->delete_animation1->Controls->Add(this->DL2);
			this->delete_animation1->Controls->Add(this->DL3);
			this->delete_animation1->Controls->Add(this->DL7);
			this->delete_animation1->Controls->Add(this->DL6);
			this->delete_animation1->Controls->Add(this->DL4);
			this->delete_animation1->Controls->Add(this->DL5);
			this->delete_animation1->Controls->Add(this->DL1);
			this->delete_animation1->Location = System::Drawing::Point(35, 259);
			this->delete_animation1->Name = L"delete_animation1";
			this->delete_animation1->Size = System::Drawing::Size(822, 367);
			this->delete_animation1->TabIndex = 2;
			// 
			// Checklabel
			// 
			this->Checklabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Checklabel->Location = System::Drawing::Point(715, 41);
			this->Checklabel->Name = L"Checklabel";
			this->Checklabel->Size = System::Drawing::Size(39, 37);
			this->Checklabel->TabIndex = 8;
			this->Checklabel->Visible = false;
			// 
			// Infolabel
			// 
			this->Infolabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Infolabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Infolabel->Location = System::Drawing::Point(36, 309);
			this->Infolabel->Name = L"Infolabel";
			this->Infolabel->Size = System::Drawing::Size(718, 49);
			this->Infolabel->TabIndex = 7;
			this->Infolabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL2
			// 
			this->DL2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL2->Location = System::Drawing::Point(181, 116);
			this->DL2->Name = L"DL2";
			this->DL2->Size = System::Drawing::Size(70, 70);
			this->DL2->TabIndex = 6;
			this->DL2->Text = L"11";
			this->DL2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL3
			// 
			this->DL3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL3->Location = System::Drawing::Point(542, 116);
			this->DL3->Name = L"DL3";
			this->DL3->Size = System::Drawing::Size(70, 70);
			this->DL3->TabIndex = 5;
			this->DL3->Text = L"34";
			this->DL3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL7
			// 
			this->DL7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL7->Location = System::Drawing::Point(684, 217);
			this->DL7->Name = L"DL7";
			this->DL7->Size = System::Drawing::Size(70, 70);
			this->DL7->TabIndex = 4;
			this->DL7->Text = L"97";
			this->DL7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL6
			// 
			this->DL6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL6->Location = System::Drawing::Point(392, 217);
			this->DL6->Name = L"DL6";
			this->DL6->Size = System::Drawing::Size(70, 70);
			this->DL6->TabIndex = 3;
			this->DL6->Text = L"28";
			this->DL6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL4
			// 
			this->DL4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL4->Location = System::Drawing::Point(36, 217);
			this->DL4->Name = L"DL4";
			this->DL4->Size = System::Drawing::Size(70, 70);
			this->DL4->TabIndex = 2;
			this->DL4->Text = L"-7";
			this->DL4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL5
			// 
			this->DL5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL5->Location = System::Drawing::Point(316, 217);
			this->DL5->Name = L"DL5";
			this->DL5->Size = System::Drawing::Size(70, 70);
			this->DL5->TabIndex = 1;
			this->DL5->Text = L"17";
			this->DL5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DL1
			// 
			this->DL1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->DL1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DL1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DL1->Location = System::Drawing::Point(354, 32);
			this->DL1->Name = L"DL1";
			this->DL1->Size = System::Drawing::Size(70, 70);
			this->DL1->TabIndex = 0;
			this->DL1->Text = L"23";
			this->DL1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BTdeletetimer1
			// 
			this->BTdeletetimer1->Interval = 1800;
			this->BTdeletetimer1->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer1_Tick);
			// 
			// BTdeletetimer2
			// 
			this->BTdeletetimer2->Interval = 1800;
			this->BTdeletetimer2->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer2_Tick);
			// 
			// BTdeletetimer3
			// 
			this->BTdeletetimer3->Interval = 1800;
			this->BTdeletetimer3->Tick += gcnew System::EventHandler(this, &BST_deletion::BTdeletetimer3_Tick);
			// 
			// BST_deletion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->delete_animation1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"BST_deletion";
			this->Size = System::Drawing::Size(1264, 673);
			this->Load += gcnew System::EventHandler(this, &BST_deletion::BST_deletion_Load);
			this->groupBox1->ResumeLayout(false);
			this->delete_animation1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BST_deletion_Load(System::Object^  sender, System::EventArgs^  e){
			 }
private: System::Void BTree_delete_but_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->RB1->Checked == true){
				this->Checklabel->Text = "0";
				this->BTree_delete_but->Enabled = false;
				this->Infolabel->Text = "Let Us Delete 17 , a LEAF NODE .";
				BTdeletetimer1->Enabled = true;
			 }
			 else if(this->RB2->Checked == true){
				this->Checklabel->Text = "0";
				this->BTree_delete_but->Enabled = false;
				this->DL6->Visible = false;
				this->Infolabel->Text = "Let Us Delete 34 , Node With One Child .";
				BTdeletetimer2->Enabled = true;
			 }
			 else if(this->RB3->Checked == true){
				this->Checklabel->Text = "0";
				this->BTree_delete_but->Enabled = false;
				this->Infolabel->Text = "Let Us Delete 23 , Node With Two Child .";
				BTdeletetimer3->Enabled = true;
			 }
			 else{
				MessageBox::Show("Please Select Any Animation Option In Delete");
			 }
		 }
private: System::Void BTdeletetimer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->Checklabel->Text == "6"){
				this->DL5->Visible = true;
				this->Infolabel->Text = "";
				this->DL5->BackColor = System::Drawing::SystemColors::HighlightText;
				this->DL1->BackColor = System::Drawing::SystemColors::HighlightText;
				this->DL2->BackColor = System::Drawing::SystemColors::HighlightText;
				this->BTree_delete_but->Enabled = true;
				BTdeletetimer1->Enabled = false;
			 }
			 else if(this->Checklabel->Text == "5"){
				this->Checklabel->Text = "6";
				this->DL5->Visible = false;
			 }
			 else if(this->Checklabel->Text == "4"){
				this->Checklabel->Text = "5";
				this->Infolabel->Text = "Now Simply Delete 17 From The BST";
			 }
			 else if(this->Checklabel->Text == "3"){
				this->Checklabel->Text = "4";
				this->DL5->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "2"){
				this->Checklabel->Text = "3";
				this->DL2->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "1"){
				this->Checklabel->Text = "2";
				this->Infolabel->Text = "First Of All We Will Search For 17 Starting From Root Node";
				this->DL1->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "0"){
				this->Checklabel->Text = "1";
			 }	
		 }
private: System::Void BTree_stop_but_Click(System::Object^  sender, System::EventArgs^  e) {
			  BTdeletetimer1->Enabled = false;
			  BTdeletetimer2->Enabled = false;
			  BTdeletetimer3->Enabled = false;
			  this->Infolabel->Text = "";

			  this->DL5->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL1->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL2->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL3->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL4->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL6->BackColor = System::Drawing::SystemColors::HighlightText;
			  this->DL7->BackColor = System::Drawing::SystemColors::HighlightText;

			  this->DL5->Visible = true;
			  this->DL1->Visible = true;
			  this->DL2->Visible = true;
			  this->DL3->Visible = true;
			  this->DL4->Visible = true;
			  this->DL6->Visible = true;
			  this->DL7->Visible = true;

			  this->DL5->Text = "17";
			  this->DL1->Text = "23";
			  this->DL2->Text = "11";
			  this->DL3->Text = "34";
			  this->DL4->Text = "-7";
			  this->DL6->Text = "28";
			  this->DL7->Text = "97";
			  this->BTree_delete_but->Enabled = true;
		 }
private: System::Void BTdeletetimer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->Checklabel->Text == "5"){
				this->DL3->Text = "34";
				this->DL7->Text = "97";
				this->DL7->Visible = true;
				this->DL6->Visible = true;
				this->Infolabel->Text = "";
				this->DL7->BackColor = System::Drawing::SystemColors::HighlightText;
				this->DL1->BackColor = System::Drawing::SystemColors::HighlightText;
				this->DL3->BackColor = System::Drawing::SystemColors::HighlightText;
				this->BTree_delete_but->Enabled = true;
				BTdeletetimer2->Enabled = false;
			 }
			 else if(this->Checklabel->Text == "4"){
				this->Checklabel->Text = "5";
				this->DL3->BackColor = System::Drawing::SystemColors::HighlightText;
				this->DL3->Text = "97";
				this->DL7->Visible = false;
				this->Infolabel->Text = "That's It !!";
			 }
			 else if(this->Checklabel->Text == "3"){
				this->Checklabel->Text = "4";
				this->Infolabel->Text = "Now , Simply Delete 34 And Replace It With Its Child 97";
			 }
			 else if(this->Checklabel->Text == "2"){
				this->Checklabel->Text = "3";
				this->DL3->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "1"){
				this->Checklabel->Text = "2";
				this->Infolabel->Text = "First Of All We Will Search For 34 Starting From Root Node";
				this->DL1->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "0"){
				this->Checklabel->Text = "1";
			 }
		 }
private: System::Void BTdeletetimer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(this->Checklabel->Text == "7"){
				  this->Infolabel->Text = "";
				  this->DL1->BackColor = System::Drawing::SystemColors::HighlightText;
				  this->DL3->BackColor = System::Drawing::SystemColors::HighlightText;		  
				  this->DL6->BackColor = System::Drawing::SystemColors::HighlightText;		 
				  this->DL1->Visible = true;		  
				  this->DL3->Visible = true;	  
				  this->DL6->Visible = true; 
				  this->DL1->Text = "23"; 
				  this->DL3->Text = "34"; 
				  this->DL6->Text = "28";
				  this->BTree_delete_but->Enabled = true;
				  BTdeletetimer3->Enabled = false;
			 }
			 else if(this->Checklabel->Text == "6"){
				this->Checklabel->Text = "7";
				this->DL6->Visible = false;
				this->Infolabel->Text = "You're Done !!";
			 }
			 else if(this->Checklabel->Text == "5"){
				this->Checklabel->Text = "6";
				this->DL1->Text = "28";
				this->Infolabel->Text = "Now ,Delete The Inorder Succesor Node Simply As We Delete A Leaf Node";
			 }
			 else if(this->Checklabel->Text == "4"){
				this->Checklabel->Text = "5";
				this->Infolabel->Text = "Now , Simply Copy The Node Value Of The Inorder Succesor In The Node To Be Deleted";
			 }
			 else if(this->Checklabel->Text == "3"){
				this->Checklabel->Text = "4";
				this->DL6->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "2"){
				this->Checklabel->Text = "3";
				this->DL3->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "1"){
				this->Checklabel->Text = "2";
				this->Infolabel->Text = "First Of All, We Find The Inorder Succesor Of The Node ,ie Leftmost Node In Right Subtree";
				this->DL1->BackColor = System::Drawing::SystemColors::Highlight;
			 }
			 else if(this->Checklabel->Text == "0"){
				this->Checklabel->Text = "1";
			 }
		 }
};
}
