#pragma once

namespace Videos_Tutorials {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BTrees;
	private: System::Windows::Forms::Panel^  Btrees_pan;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Btrees_insert;
	private: System::Windows::Forms::Button^  Btrees_search;

	private: System::Windows::Forms::Button^  Btrees_delete;
	private: System::Windows::Forms::Panel^  Btrees_pan_insert;





	private: System::Windows::Forms::Button^  Btrees_intro;
	private: System::Windows::Forms::Panel^  Btrees_pan_intro;
	private: System::Windows::Forms::Panel^  Btrees_pan_delete;






	private: System::Windows::Forms::Panel^  Btrees_pan_search;
	private: System::Windows::Forms::Panel^  Btree_insert_animation;
	private: System::Windows::Forms::Label^  BT1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS2;

	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS1;

	private: System::Windows::Forms::Label^  BT3;

	private: System::Windows::Forms::Label^  BT2;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS6;


	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS5;

	private: System::Windows::Forms::Label^  BT4;
	private: System::Windows::Forms::Label^  BT6;
	private: System::Windows::Forms::Label^  BT7;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS3;






	private: System::Windows::Forms::Button^  InsertBT;
	private: System::Windows::Forms::Label^  BT5;
	private: Microsoft::VisualBasic::PowerPacks::LineShape^  LS4;



	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  BTinsert_value;
	private: System::Windows::Forms::Timer^  BTinsert_timer;




















	protected: 

	protected: 

	protected: 

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
			this->BTrees = (gcnew System::Windows::Forms::Button());
			this->Btrees_pan = (gcnew System::Windows::Forms::Panel());
			this->Btrees_intro = (gcnew System::Windows::Forms::Button());
			this->Btrees_search = (gcnew System::Windows::Forms::Button());
			this->Btrees_delete = (gcnew System::Windows::Forms::Button());
			this->Btrees_insert = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Btrees_pan_insert = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BTinsert_value = (gcnew System::Windows::Forms::TextBox());
			this->InsertBT = (gcnew System::Windows::Forms::Button());
			this->Btree_insert_animation = (gcnew System::Windows::Forms::Panel());
			this->BT5 = (gcnew System::Windows::Forms::Label());
			this->BT4 = (gcnew System::Windows::Forms::Label());
			this->BT6 = (gcnew System::Windows::Forms::Label());
			this->BT7 = (gcnew System::Windows::Forms::Label());
			this->BT3 = (gcnew System::Windows::Forms::Label());
			this->BT2 = (gcnew System::Windows::Forms::Label());
			this->BT1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->LS4 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->LS3 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->LS5 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->LS6 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->LS1 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->LS2 = (gcnew Microsoft::VisualBasic::PowerPacks::LineShape());
			this->Btrees_pan_search = (gcnew System::Windows::Forms::Panel());
			this->Btrees_pan_intro = (gcnew System::Windows::Forms::Panel());
			this->Btrees_pan_delete = (gcnew System::Windows::Forms::Panel());
			this->BTinsert_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Btrees_pan->SuspendLayout();
			this->Btrees_pan_insert->SuspendLayout();
			this->Btree_insert_animation->SuspendLayout();
			this->SuspendLayout();
			// 
			// BTrees
			// 
			this->BTrees->Font = (gcnew System::Drawing::Font(L"Century Gothic", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BTrees->Location = System::Drawing::Point(338, 213);
			this->BTrees->Name = L"BTrees";
			this->BTrees->Size = System::Drawing::Size(449, 102);
			this->BTrees->TabIndex = 0;
			this->BTrees->Text = L"Binary Search Trees ";
			this->BTrees->UseVisualStyleBackColor = true;
			this->BTrees->Click += gcnew System::EventHandler(this, &Form1::BTrees_Click);
			// 
			// Btrees_pan
			// 
			this->Btrees_pan->Controls->Add(this->Btrees_intro);
			this->Btrees_pan->Controls->Add(this->Btrees_search);
			this->Btrees_pan->Controls->Add(this->Btrees_delete);
			this->Btrees_pan->Controls->Add(this->Btrees_insert);
			this->Btrees_pan->Controls->Add(this->label1);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_insert);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_search);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_intro);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_delete);
			this->Btrees_pan->Location = System::Drawing::Point(1, 1);
			this->Btrees_pan->Name = L"Btrees_pan";
			this->Btrees_pan->Size = System::Drawing::Size(1170, 705);
			this->Btrees_pan->TabIndex = 1;
			this->Btrees_pan->Visible = false;
			// 
			// Btrees_intro
			// 
			this->Btrees_intro->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btrees_intro->Location = System::Drawing::Point(2, 94);
			this->Btrees_intro->Name = L"Btrees_intro";
			this->Btrees_intro->Size = System::Drawing::Size(164, 43);
			this->Btrees_intro->TabIndex = 5;
			this->Btrees_intro->Text = L"Introduction";
			this->Btrees_intro->UseVisualStyleBackColor = true;
			this->Btrees_intro->Click += gcnew System::EventHandler(this, &Form1::Btrees_intro_Click);
			// 
			// Btrees_search
			// 
			this->Btrees_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btrees_search->Location = System::Drawing::Point(2, 241);
			this->Btrees_search->Name = L"Btrees_search";
			this->Btrees_search->Size = System::Drawing::Size(164, 43);
			this->Btrees_search->TabIndex = 3;
			this->Btrees_search->Text = L"Search";
			this->Btrees_search->UseVisualStyleBackColor = true;
			this->Btrees_search->Click += gcnew System::EventHandler(this, &Form1::Btrees_search_Click);
			// 
			// Btrees_delete
			// 
			this->Btrees_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btrees_delete->Location = System::Drawing::Point(2, 192);
			this->Btrees_delete->Name = L"Btrees_delete";
			this->Btrees_delete->Size = System::Drawing::Size(164, 43);
			this->Btrees_delete->TabIndex = 2;
			this->Btrees_delete->Text = L"Deletion";
			this->Btrees_delete->UseVisualStyleBackColor = true;
			this->Btrees_delete->Click += gcnew System::EventHandler(this, &Form1::Btrees_delete_Click);
			// 
			// Btrees_insert
			// 
			this->Btrees_insert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Btrees_insert->Location = System::Drawing::Point(2, 143);
			this->Btrees_insert->Name = L"Btrees_insert";
			this->Btrees_insert->Size = System::Drawing::Size(164, 43);
			this->Btrees_insert->TabIndex = 1;
			this->Btrees_insert->Text = L"Insertion";
			this->Btrees_insert->UseVisualStyleBackColor = true;
			this->Btrees_insert->Click += gcnew System::EventHandler(this, &Form1::Btrees_insert_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(687, 75);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Binary Search Trees Operations";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Btrees_pan_insert
			// 
			this->Btrees_pan_insert->Controls->Add(this->label6);
			this->Btrees_pan_insert->Controls->Add(this->BTinsert_value);
			this->Btrees_pan_insert->Controls->Add(this->InsertBT);
			this->Btrees_pan_insert->Controls->Add(this->Btree_insert_animation);
			this->Btrees_pan_insert->Location = System::Drawing::Point(168, 89);
			this->Btrees_pan_insert->Name = L"Btrees_pan_insert";
			this->Btrees_pan_insert->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_insert->TabIndex = 4;
			this->Btrees_pan_insert->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(770, 202);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Insert Value";
			// 
			// BTinsert_value
			// 
			this->BTinsert_value->Location = System::Drawing::Point(864, 197);
			this->BTinsert_value->Name = L"BTinsert_value";
			this->BTinsert_value->Size = System::Drawing::Size(98, 22);
			this->BTinsert_value->TabIndex = 2;
			// 
			// InsertBT
			// 
			this->InsertBT->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->InsertBT->Location = System::Drawing::Point(773, 241);
			this->InsertBT->Name = L"InsertBT";
			this->InsertBT->Size = System::Drawing::Size(189, 55);
			this->InsertBT->TabIndex = 1;
			this->InsertBT->Text = L"INSERT";
			this->InsertBT->UseVisualStyleBackColor = true;
			this->InsertBT->Click += gcnew System::EventHandler(this, &Form1::InsertBT_Click);
			// 
			// Btree_insert_animation
			// 
			this->Btree_insert_animation->BackColor = System::Drawing::SystemColors::HighlightText;
			this->Btree_insert_animation->Controls->Add(this->BT5);
			this->Btree_insert_animation->Controls->Add(this->BT4);
			this->Btree_insert_animation->Controls->Add(this->BT6);
			this->Btree_insert_animation->Controls->Add(this->BT7);
			this->Btree_insert_animation->Controls->Add(this->BT3);
			this->Btree_insert_animation->Controls->Add(this->BT2);
			this->Btree_insert_animation->Controls->Add(this->BT1);
			this->Btree_insert_animation->Controls->Add(this->shapeContainer1);
			this->Btree_insert_animation->Location = System::Drawing::Point(33, 152);
			this->Btree_insert_animation->Name = L"Btree_insert_animation";
			this->Btree_insert_animation->Size = System::Drawing::Size(711, 442);
			this->Btree_insert_animation->TabIndex = 4;
			// 
			// BT5
			// 
			this->BT5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT5->Location = System::Drawing::Point(227, 283);
			this->BT5->Name = L"BT5";
			this->BT5->Size = System::Drawing::Size(108, 79);
			this->BT5->TabIndex = 7;
			this->BT5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT5->Visible = false;
			// 
			// BT4
			// 
			this->BT4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT4->Location = System::Drawing::Point(63, 283);
			this->BT4->Name = L"BT4";
			this->BT4->Size = System::Drawing::Size(108, 79);
			this->BT4->TabIndex = 6;
			this->BT4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT4->Visible = false;
			// 
			// BT6
			// 
			this->BT6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT6->Location = System::Drawing::Point(341, 283);
			this->BT6->Name = L"BT6";
			this->BT6->Size = System::Drawing::Size(108, 79);
			this->BT6->TabIndex = 5;
			this->BT6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT6->Visible = false;
			// 
			// BT7
			// 
			this->BT7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT7->Location = System::Drawing::Point(496, 283);
			this->BT7->Name = L"BT7";
			this->BT7->Size = System::Drawing::Size(108, 79);
			this->BT7->TabIndex = 4;
			this->BT7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT7->Visible = false;
			// 
			// BT3
			// 
			this->BT3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT3->Location = System::Drawing::Point(412, 155);
			this->BT3->Name = L"BT3";
			this->BT3->Size = System::Drawing::Size(108, 79);
			this->BT3->TabIndex = 3;
			this->BT3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT3->Visible = false;
			// 
			// BT2
			// 
			this->BT2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT2->Location = System::Drawing::Point(147, 155);
			this->BT2->Name = L"BT2";
			this->BT2->Size = System::Drawing::Size(108, 79);
			this->BT2->TabIndex = 2;
			this->BT2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT2->Visible = false;
			// 
			// BT1
			// 
			this->BT1->BackColor = System::Drawing::SystemColors::HighlightText;
			this->BT1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BT1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BT1->Location = System::Drawing::Point(279, 14);
			this->BT1->Name = L"BT1";
			this->BT1->Size = System::Drawing::Size(108, 79);
			this->BT1->TabIndex = 0;
			this->BT1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BT1->Visible = false;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(6) {this->LS4, this->LS3, 
				this->LS5, this->LS6, this->LS1, this->LS2});
			this->shapeContainer1->Size = System::Drawing::Size(711, 442);
			this->shapeContainer1->TabIndex = 1;
			this->shapeContainer1->TabStop = false;
			// 
			// LS4
			// 
			this->LS4->BorderWidth = 5;
			this->LS4->Name = L"LS4";
			this->LS4->Visible = false;
			this->LS4->X1 = 215;
			this->LS4->X2 = 275;
			this->LS4->Y1 = 228;
			this->LS4->Y2 = 284;
			// 
			// LS3
			// 
			this->LS3->BorderWidth = 5;
			this->LS3->Name = L"LS3";
			this->LS3->Visible = false;
			this->LS3->X1 = 190;
			this->LS3->X2 = 117;
			this->LS3->Y1 = 208;
			this->LS3->Y2 = 282;
			// 
			// LS5
			// 
			this->LS5->BorderWidth = 5;
			this->LS5->Name = L"LS5";
			this->LS5->Visible = false;
			this->LS5->X1 = 457;
			this->LS5->X2 = 391;
			this->LS5->Y1 = 221;
			this->LS5->Y2 = 287;
			// 
			// LS6
			// 
			this->LS6->BorderWidth = 5;
			this->LS6->Name = L"LS6";
			this->LS6->Visible = false;
			this->LS6->X1 = 470;
			this->LS6->X2 = 547;
			this->LS6->Y1 = 218;
			this->LS6->Y2 = 292;
			// 
			// LS1
			// 
			this->LS1->BorderWidth = 5;
			this->LS1->Name = L"LS1";
			this->LS1->Visible = false;
			this->LS1->X1 = 206;
			this->LS1->X2 = 282;
			this->LS1->Y1 = 160;
			this->LS1->Y2 = 89;
			// 
			// LS2
			// 
			this->LS2->BorderWidth = 5;
			this->LS2->Name = L"LS2";
			this->LS2->Visible = false;
			this->LS2->X1 = 379;
			this->LS2->X2 = 458;
			this->LS2->Y1 = 84;
			this->LS2->Y2 = 158;
			// 
			// Btrees_pan_search
			// 
			this->Btrees_pan_search->Location = System::Drawing::Point(166, 86);
			this->Btrees_pan_search->Name = L"Btrees_pan_search";
			this->Btrees_pan_search->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_search->TabIndex = 8;
			this->Btrees_pan_search->Visible = false;
			// 
			// Btrees_pan_intro
			// 
			this->Btrees_pan_intro->Location = System::Drawing::Point(168, 91);
			this->Btrees_pan_intro->Name = L"Btrees_pan_intro";
			this->Btrees_pan_intro->Size = System::Drawing::Size(996, 608);
			this->Btrees_pan_intro->TabIndex = 6;
			this->Btrees_pan_intro->Visible = false;
			// 
			// Btrees_pan_delete
			// 
			this->Btrees_pan_delete->Location = System::Drawing::Point(165, 88);
			this->Btrees_pan_delete->Name = L"Btrees_pan_delete";
			this->Btrees_pan_delete->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_delete->TabIndex = 7;
			this->Btrees_pan_delete->Visible = false;
			// 
			// BTinsert_timer
			// 
			this->BTinsert_timer->Interval = 1;
			this->BTinsert_timer->Tick += gcnew System::EventHandler(this, &Form1::BTinsert_timer_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1174, 704);
			this->Controls->Add(this->Btrees_pan);
			this->Controls->Add(this->BTrees);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Btrees_pan->ResumeLayout(false);
			this->Btrees_pan_insert->ResumeLayout(false);
			this->Btrees_pan_insert->PerformLayout();
			this->Btree_insert_animation->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void BTrees_Click(System::Object^  sender, System::EventArgs^  e) {
			 Btrees_pan->Visible = true;
			 Btrees_pan->BringToFront();
			 Btrees_pan_intro->Visible = true;
			 Btrees_pan_intro->BringToFront();
		 }
private: System::Void Btrees_insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 Btrees_pan_insert->Visible = true;
			 Btrees_pan_insert->BringToFront();
		 }
private: System::Void Btrees_intro_Click(System::Object^  sender, System::EventArgs^  e) {
			 Btrees_pan_intro->Visible = true;
			 Btrees_pan_intro->BringToFront();
		 }
private: System::Void Btrees_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 Btrees_pan_delete->Visible = true;
			 Btrees_pan_delete->BringToFront();
		 }
private: System::Void Btrees_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 Btrees_pan_search->Visible = true;
			 Btrees_pan_search->BringToFront();
		 }
private: System::Void InsertBT_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->BTinsert_value->Text == ""){
				MessageBox::Show("Please Enter Value In The TextBox");
			 }
			 else if(int::Parse(this->BTinsert_value->Text)>99 || int::Parse(this->BTinsert_value->Text)<-99){
				this->BTinsert_value->Text = "";
				MessageBox::Show("Please Enter Value Between 99 and -99");
			 }
			 else{
				 this->BTinsert_value->Enabled = false;
				 this->InsertBT->Enabled = false;
				 if(this->BT1->Visible == false){
					this->BT1->Text = this->BTinsert_value->Text;
					this->BT1->Visible = true;
					this->BTinsert_value->Text = "";
					this->BTinsert_value->Enabled = true;
					this->InsertBT->Enabled = true;
					return ;
				 }
				 if(this->BT2->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) ){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT3->Visible == false && this->BT1->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT4->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT2->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT5->Visible == false && this->BT1->Visible == true && this->BT2->Visible == true && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT2->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT6->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)<=int::Parse(this->BT3->Text)){
					BTinsert_timer->Enabled = true;
				 }
				 else if(this->BT7->Visible == false && this->BT1->Visible == true && this->BT3->Visible == true && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT1->Text) && int::Parse(this->BTinsert_value->Text)>int::Parse(this->BT3->Text)){
						BTinsert_timer->Enabled = true;
				 }
				 else{
					this->BTinsert_value->Text = "";
					this->BTinsert_value->Enabled = true;
					this->InsertBT->Enabled = true;
					MessageBox::Show("You Have Reached A Maximum Height Of The Binary Search Tree");
				 }
			 }
		 }
private: System::Void BTinsert_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 int x = int::Parse(this->BTinsert_value->Text);
			 if(this->BT4->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x<=int::Parse(this->BT2->Text)){
				this->BT4->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT4->Text = this->BTinsert_value->Text;
				this->LS3->Visible = true;
				this->BT4->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(this->BT5->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->BackColor == System::Drawing::SystemColors::MenuHighlight && x<=int::Parse(this->BT1->Text) && x>int::Parse(this->BT2->Text)){
				this->BT5->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT5->Text = this->BTinsert_value->Text;
				this->LS4->Visible = true;
				this->BT5->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(this->BT6->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x<=int::Parse(this->BT3->Text)){
				this->BT6->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT6->Text = this->BTinsert_value->Text;
				this->LS5->Visible = true;
				this->BT6->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(this->BT7->Visible==false && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->BackColor == System::Drawing::SystemColors::MenuHighlight && x>int::Parse(this->BT1->Text) && x>int::Parse(this->BT3->Text)){
				this->BT7->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT7->Text = this->BTinsert_value->Text;
				this->LS6->Visible = true;
				this->BT7->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT3->Visible==false && x> int::Parse(this->BT1->Text)){
				this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT3->Text = this->BTinsert_value->Text;
				this->LS2->Visible = true;
				this->BT3->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(this->BT1->Visible==true && this->BT1->BackColor == System::Drawing::SystemColors::MenuHighlight && this->BT2->Visible==false && x<= int::Parse(this->BT1->Text)){
				this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
				this->BT2->Text = this->BTinsert_value->Text;
				this->LS1->Visible = true;
				this->BT2->Visible = true;
				this->BTinsert_value->Text = "";
				this->BTinsert_value->Enabled = true;
				this->InsertBT->Enabled = true;
				BTinsert_timer->Enabled = false;
			 }
			 else if(BT2->Visible==true && this->BT2->BackColor != System::Drawing::SystemColors::MenuHighlight && x<= int::Parse(this->BT1->Text)){
				 this->BT2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
			 else if(BT3->Visible==true && this->BT3->BackColor != System::Drawing::SystemColors::MenuHighlight && x> int::Parse(this->BT1->Text)){
				this->BT3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
			 else if(this->BT1->Visible == true && this->BT1->BackColor != System::Drawing::SystemColors::MenuHighlight){
				this->BT1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			 }
		 }
};
}

