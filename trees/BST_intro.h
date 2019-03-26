#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace trees {

	/// <summary>
	/// Summary for BST_intro
	/// </summary>
	public ref class BST_intro : public System::Windows::Forms::UserControl
	{
	public:
		BST_intro(void)
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
		~BST_intro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  BST_main_lab;
	private: System::Windows::Forms::Button^  BST_insert_btn;
	private: System::Windows::Forms::Button^  BST_search_btn;
	private: System::Windows::Forms::Button^  BST_delete_btn;
	private: System::Windows::Forms::Button^  BST_intro_btn;
	private: System::Windows::Forms::Panel^  panel1;


	protected: 

	protected: 

	protected: 

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
			this->BST_main_lab = (gcnew System::Windows::Forms::Label());
			this->BST_intro_btn = (gcnew System::Windows::Forms::Button());
			this->BST_search_btn = (gcnew System::Windows::Forms::Button());
			this->BST_delete_btn = (gcnew System::Windows::Forms::Button());
			this->BST_insert_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// BST_main_lab
			// 
			this->BST_main_lab->AutoSize = true;
			this->BST_main_lab->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_main_lab->Location = System::Drawing::Point(429, 11);
			this->BST_main_lab->Name = L"BST_main_lab";
			this->BST_main_lab->Size = System::Drawing::Size(313, 39);
			this->BST_main_lab->TabIndex = 0;
			this->BST_main_lab->Text = L"Binary Search Tree";
			// 
			// BST_intro_btn
			// 
			this->BST_intro_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_intro_btn->Location = System::Drawing::Point(2, 94);
			this->BST_intro_btn->Visible = true;
			this->BST_intro_btn->Name = L"BST_intro_btn";
			this->BST_intro_btn->Size = System::Drawing::Size(164, 43);
			this->BST_intro_btn->TabIndex = 5;
			this->BST_intro_btn->Text = L"Introduction";
			this->BST_intro_btn->UseVisualStyleBackColor = true;
			this->BST_intro_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_intro_btn_Click);
			// 
			// BST_search_btn
			// 
			this->BST_search_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_search_btn->Location = System::Drawing::Point(2, 241);
			this->BST_search_btn->Name = L"BST_search_btn";
			this->BST_search_btn->Size = System::Drawing::Size(164, 43);
			this->BST_search_btn->TabIndex = 3;
			this->BST_search_btn->Text = L"Search";
			this->BST_search_btn->UseVisualStyleBackColor = true;
			this->BST_search_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_search_btn_Click);
			// 
			// BST_delete_btn
			// 
			this->BST_delete_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_delete_btn->Location = System::Drawing::Point(2, 192);
			this->BST_delete_btn->Name = L"BST_delete_btn";
			this->BST_delete_btn->Size = System::Drawing::Size(164, 43);
			this->BST_delete_btn->TabIndex = 2;
			this->BST_delete_btn->Text = L"Deletion";
			this->BST_delete_btn->UseVisualStyleBackColor = true;
			this->BST_delete_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_delete_btn_Click);
			// 
			// BST_insert_btn
			// 
			this->BST_insert_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_insert_btn->Location = System::Drawing::Point(2, 143);
			this->BST_insert_btn->Name = L"BST_insert_btn";
			this->BST_insert_btn->Size = System::Drawing::Size(164, 43);
			this->BST_insert_btn->TabIndex = 1;
			this->BST_insert_btn->Text = L"Insertion";
			this->BST_insert_btn->UseVisualStyleBackColor = true;
			this->BST_insert_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_insert_btn_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1261, 598);
			this->panel1->TabIndex = 1;
			// 
			// BST_intro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->BST_main_lab);
			this->Name = L"BST_intro";
			this->Size = System::Drawing::Size(1264, 673);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void BST_insert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void BST_intro_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void BST_delete_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void BST_search_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
	};
}
