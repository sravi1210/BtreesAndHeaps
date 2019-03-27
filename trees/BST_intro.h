#pragma once

#include "BST_introduction.h"
#include "BST_insertion.h"
#include "BST_deletion.h"
#include "BST_search.h"


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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  BST_intro_btn;
	private: System::Windows::Forms::Button^  BST_insert_btn;
	private: System::Windows::Forms::Button^  BST_deletion_btn;
	private: System::Windows::Forms::Button^  BST_traversal_btn;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BST_intro_btn = (gcnew System::Windows::Forms::Button());
			this->BST_insert_btn = (gcnew System::Windows::Forms::Button());
			this->BST_deletion_btn = (gcnew System::Windows::Forms::Button());
			this->BST_traversal_btn = (gcnew System::Windows::Forms::Button());
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
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 121);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1261, 549);
			this->panel1->TabIndex = 1;
			// 
			// BST_intro_btn
			// 
			this->BST_intro_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_intro_btn->Location = System::Drawing::Point(38, 69);
			this->BST_intro_btn->Name = L"BST_intro_btn";
			this->BST_intro_btn->Size = System::Drawing::Size(225, 46);
			this->BST_intro_btn->TabIndex = 2;
			this->BST_intro_btn->Text = L"Introduction";
			this->BST_intro_btn->UseVisualStyleBackColor = true;
			this->BST_intro_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_intro_btn_Click);
			// 
			// BST_insert_btn
			// 
			this->BST_insert_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_insert_btn->Location = System::Drawing::Point(310, 69);
			this->BST_insert_btn->Name = L"BST_insert_btn";
			this->BST_insert_btn->Size = System::Drawing::Size(248, 46);
			this->BST_insert_btn->TabIndex = 3;
			this->BST_insert_btn->Text = L"Insertion";
			this->BST_insert_btn->UseVisualStyleBackColor = true;
			this->BST_insert_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_insert_btn_Click);
			// 
			// BST_deletion_btn
			// 
			this->BST_deletion_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_deletion_btn->Location = System::Drawing::Point(601, 69);
			this->BST_deletion_btn->Name = L"BST_deletion_btn";
			this->BST_deletion_btn->Size = System::Drawing::Size(251, 46);
			this->BST_deletion_btn->TabIndex = 4;
			this->BST_deletion_btn->Text = L"Deletion";
			this->BST_deletion_btn->UseVisualStyleBackColor = true;
			this->BST_deletion_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_deletion_btn_Click);
			// 
			// BST_traversal_btn
			// 
			this->BST_traversal_btn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->BST_traversal_btn->Location = System::Drawing::Point(891, 69);
			this->BST_traversal_btn->Name = L"BST_traversal_btn";
			this->BST_traversal_btn->Size = System::Drawing::Size(270, 46);
			this->BST_traversal_btn->TabIndex = 5;
			this->BST_traversal_btn->Text = L"Traversal";
			this->BST_traversal_btn->UseVisualStyleBackColor = true;
			this->BST_traversal_btn->Click += gcnew System::EventHandler(this, &BST_intro::BST_traversal_btn_Click);
			// 
			// BST_intro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->BST_traversal_btn);
			this->Controls->Add(this->BST_deletion_btn);
			this->Controls->Add(this->BST_insert_btn);
			this->Controls->Add(this->BST_intro_btn);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->BST_main_lab);
			this->Name = L"BST_intro";
			this->Size = System::Drawing::Size(1264, 673);
			this->Load += gcnew System::EventHandler(this, &BST_intro::BST_intro_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void BST_intro_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Controls->Clear();
			 this->panel1->Controls->Add(gcnew BST_introduction);
				//this->panel1->BST_introduction->Location = System::Drawing::Point(0, 0);
				//this->bsT_insertion1->Name = L"bsT_insertion1";
				//this->bsT_insertion1->Size = System::Drawing::Size(1264, 546);
				//this->bsT_insertion1->TabIndex = 2;
			 }
private: System::Void BST_insert_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			this->panel1->Controls->Clear();
			this->panel1->Controls->Add(gcnew BST_insertion);
		 }
private: System::Void BST_intro_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Controls->Clear();
			 this->panel1->Controls->Add(gcnew BST_introduction);
		 }
private: System::Void BST_deletion_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Controls->Clear();
			 this->panel1->Controls->Add(gcnew BST_deletion);
		 }
private: System::Void BST_traversal_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Controls->Clear();
			 this->panel1->Controls->Add(gcnew BST_search);
		 }
};
}
