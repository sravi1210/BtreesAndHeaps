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

	private: System::Windows::Forms::Button^  PlayVideo_insert;

	private: AxWMPLib::AxWindowsMediaPlayer^  Player_insert;
	private: System::Windows::Forms::Button^  StopVideo_insert;
	private: System::Windows::Forms::Button^  Btrees_intro;
	private: System::Windows::Forms::Panel^  Btrees_pan_intro;
	private: System::Windows::Forms::Panel^  Btrees_pan_delete;
	private: System::Windows::Forms::Button^  StopVideo_delete;


	private: System::Windows::Forms::Button^  PlayVideo_delete;

	private: AxWMPLib::AxWindowsMediaPlayer^  Player_delete;
	private: System::Windows::Forms::Panel^  Btrees_pan_search;
	private: System::Windows::Forms::Button^  StopVideo_search;

	private: System::Windows::Forms::Button^  PlayVideo_search;

	private: AxWMPLib::AxWindowsMediaPlayer^  Player_search;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->BTrees = (gcnew System::Windows::Forms::Button());
			this->Btrees_pan = (gcnew System::Windows::Forms::Panel());
			this->Btrees_intro = (gcnew System::Windows::Forms::Button());
			this->Btrees_search = (gcnew System::Windows::Forms::Button());
			this->Btrees_delete = (gcnew System::Windows::Forms::Button());
			this->Btrees_insert = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Btrees_pan_delete = (gcnew System::Windows::Forms::Panel());
			this->StopVideo_delete = (gcnew System::Windows::Forms::Button());
			this->PlayVideo_delete = (gcnew System::Windows::Forms::Button());
			this->Player_delete = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->Btrees_pan_insert = (gcnew System::Windows::Forms::Panel());
			this->StopVideo_insert = (gcnew System::Windows::Forms::Button());
			this->PlayVideo_insert = (gcnew System::Windows::Forms::Button());
			this->Player_insert = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->Btrees_pan_search = (gcnew System::Windows::Forms::Panel());
			this->StopVideo_search = (gcnew System::Windows::Forms::Button());
			this->PlayVideo_search = (gcnew System::Windows::Forms::Button());
			this->Player_search = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->Btrees_pan_intro = (gcnew System::Windows::Forms::Panel());
			this->Btrees_pan->SuspendLayout();
			this->Btrees_pan_delete->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_delete))->BeginInit();
			this->Btrees_pan_insert->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_insert))->BeginInit();
			this->Btrees_pan_search->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_search))->BeginInit();
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
			this->Btrees_pan->Controls->Add(this->Btrees_pan_delete);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_insert);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_search);
			this->Btrees_pan->Controls->Add(this->Btrees_pan_intro);
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
			// Btrees_pan_delete
			// 
			this->Btrees_pan_delete->Controls->Add(this->StopVideo_delete);
			this->Btrees_pan_delete->Controls->Add(this->PlayVideo_delete);
			this->Btrees_pan_delete->Controls->Add(this->Player_delete);
			this->Btrees_pan_delete->Location = System::Drawing::Point(165, 88);
			this->Btrees_pan_delete->Name = L"Btrees_pan_delete";
			this->Btrees_pan_delete->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_delete->TabIndex = 7;
			this->Btrees_pan_delete->Visible = false;
			// 
			// StopVideo_delete
			// 
			this->StopVideo_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StopVideo_delete->Location = System::Drawing::Point(833, 440);
			this->StopVideo_delete->Name = L"StopVideo_delete";
			this->StopVideo_delete->Size = System::Drawing::Size(133, 57);
			this->StopVideo_delete->TabIndex = 2;
			this->StopVideo_delete->Text = L"Stop";
			this->StopVideo_delete->UseVisualStyleBackColor = true;
			this->StopVideo_delete->Click += gcnew System::EventHandler(this, &Form1::StopVideo_delete_Click);
			// 
			// PlayVideo_delete
			// 
			this->PlayVideo_delete->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PlayVideo_delete->Location = System::Drawing::Point(833, 278);
			this->PlayVideo_delete->Name = L"PlayVideo_delete";
			this->PlayVideo_delete->Size = System::Drawing::Size(133, 57);
			this->PlayVideo_delete->TabIndex = 1;
			this->PlayVideo_delete->Text = L"Play";
			this->PlayVideo_delete->UseVisualStyleBackColor = true;
			this->PlayVideo_delete->Click += gcnew System::EventHandler(this, &Form1::PlayVideo_delete_Click);
			// 
			// Player_delete
			// 
			this->Player_delete->Enabled = true;
			this->Player_delete->Location = System::Drawing::Point(20, 183);
			this->Player_delete->MaximumSize = System::Drawing::Size(787, 414);
			this->Player_delete->MinimumSize = System::Drawing::Size(787, 414);
			this->Player_delete->Name = L"Player_delete";
			this->Player_delete->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"Player_delete.OcxState")));
			this->Player_delete->Size = System::Drawing::Size(787, 414);
			this->Player_delete->TabIndex = 0;
			// 
			// Btrees_pan_insert
			// 
			this->Btrees_pan_insert->Controls->Add(this->StopVideo_insert);
			this->Btrees_pan_insert->Controls->Add(this->PlayVideo_insert);
			this->Btrees_pan_insert->Controls->Add(this->Player_insert);
			this->Btrees_pan_insert->Location = System::Drawing::Point(168, 89);
			this->Btrees_pan_insert->Name = L"Btrees_pan_insert";
			this->Btrees_pan_insert->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_insert->TabIndex = 4;
			this->Btrees_pan_insert->Visible = false;
			// 
			// StopVideo_insert
			// 
			this->StopVideo_insert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StopVideo_insert->Location = System::Drawing::Point(833, 440);
			this->StopVideo_insert->Name = L"StopVideo_insert";
			this->StopVideo_insert->Size = System::Drawing::Size(133, 57);
			this->StopVideo_insert->TabIndex = 2;
			this->StopVideo_insert->Text = L"Stop";
			this->StopVideo_insert->UseVisualStyleBackColor = true;
			this->StopVideo_insert->Click += gcnew System::EventHandler(this, &Form1::StopVideo_insert_Click);
			// 
			// PlayVideo_insert
			// 
			this->PlayVideo_insert->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PlayVideo_insert->Location = System::Drawing::Point(833, 278);
			this->PlayVideo_insert->Name = L"PlayVideo_insert";
			this->PlayVideo_insert->Size = System::Drawing::Size(133, 57);
			this->PlayVideo_insert->TabIndex = 1;
			this->PlayVideo_insert->Text = L"Play";
			this->PlayVideo_insert->UseVisualStyleBackColor = true;
			this->PlayVideo_insert->Click += gcnew System::EventHandler(this, &Form1::PlayVideo_insert_Click);
			// 
			// Player_insert
			// 
			this->Player_insert->Enabled = true;
			this->Player_insert->Location = System::Drawing::Point(20, 183);
			this->Player_insert->MaximumSize = System::Drawing::Size(787, 414);
			this->Player_insert->MinimumSize = System::Drawing::Size(787, 414);
			this->Player_insert->Name = L"Player_insert";
			this->Player_insert->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"Player_insert.OcxState")));
			this->Player_insert->Size = System::Drawing::Size(787, 414);
			this->Player_insert->TabIndex = 0;
			// 
			// Btrees_pan_search
			// 
			this->Btrees_pan_search->Controls->Add(this->StopVideo_search);
			this->Btrees_pan_search->Controls->Add(this->PlayVideo_search);
			this->Btrees_pan_search->Controls->Add(this->Player_search);
			this->Btrees_pan_search->Location = System::Drawing::Point(166, 86);
			this->Btrees_pan_search->Name = L"Btrees_pan_search";
			this->Btrees_pan_search->Size = System::Drawing::Size(999, 608);
			this->Btrees_pan_search->TabIndex = 8;
			this->Btrees_pan_search->Visible = false;
			// 
			// StopVideo_search
			// 
			this->StopVideo_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->StopVideo_search->Location = System::Drawing::Point(833, 440);
			this->StopVideo_search->Name = L"StopVideo_search";
			this->StopVideo_search->Size = System::Drawing::Size(133, 57);
			this->StopVideo_search->TabIndex = 2;
			this->StopVideo_search->Text = L"Stop";
			this->StopVideo_search->UseVisualStyleBackColor = true;
			this->StopVideo_search->Click += gcnew System::EventHandler(this, &Form1::StopVideo_search_Click);
			// 
			// PlayVideo_search
			// 
			this->PlayVideo_search->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->PlayVideo_search->Location = System::Drawing::Point(833, 278);
			this->PlayVideo_search->Name = L"PlayVideo_search";
			this->PlayVideo_search->Size = System::Drawing::Size(133, 57);
			this->PlayVideo_search->TabIndex = 1;
			this->PlayVideo_search->Text = L"Play";
			this->PlayVideo_search->UseVisualStyleBackColor = true;
			this->PlayVideo_search->Click += gcnew System::EventHandler(this, &Form1::PlayVideo_search_Click);
			// 
			// Player_search
			// 
			this->Player_search->Enabled = true;
			this->Player_search->Location = System::Drawing::Point(20, 183);
			this->Player_search->MaximumSize = System::Drawing::Size(787, 414);
			this->Player_search->MinimumSize = System::Drawing::Size(787, 414);
			this->Player_search->Name = L"Player_search";
			this->Player_search->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"Player_search.OcxState")));
			this->Player_search->Size = System::Drawing::Size(787, 414);
			this->Player_search->TabIndex = 0;
			// 
			// Btrees_pan_intro
			// 
			this->Btrees_pan_intro->Location = System::Drawing::Point(168, 91);
			this->Btrees_pan_intro->Name = L"Btrees_pan_intro";
			this->Btrees_pan_intro->Size = System::Drawing::Size(996, 608);
			this->Btrees_pan_intro->TabIndex = 6;
			this->Btrees_pan_intro->Visible = false;
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
			this->Btrees_pan_delete->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_delete))->EndInit();
			this->Btrees_pan_insert->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_insert))->EndInit();
			this->Btrees_pan_search->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Player_search))->EndInit();
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
private: System::Void PlayVideo_insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_insert->URL = "\Videos\\BtreeInsert.mp4";
			 this->Player_insert->Ctlcontrols->play();
		 }
private: System::Void StopVideo_insert_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_insert->Ctlcontrols->stop();
		 }
private: System::Void PlayVideo_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_search->URL = "\Videos\\BtreeInsert.mp4";
			 this->Player_search->Ctlcontrols->play();
		 }
private: System::Void StopVideo_search_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_search->Ctlcontrols->stop();
		 }
private: System::Void PlayVideo_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_delete->URL = "\Videos\\BtreeInsert.mp4";
			 this->Player_delete->Ctlcontrols->play();
		 }
private: System::Void StopVideo_delete_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Player_delete->Ctlcontrols->stop();
		 }
};
}

