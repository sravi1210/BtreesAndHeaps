#pragma once

#include "BST_intro.h"
#include "BST_introduction.h"
#include "BST_insertion.h"
#include "BST_deletion.h"
#include "BST_search.h"

namespace trees {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BST_mainpage
	/// </summary>
	public ref class BST_mainpage : public System::Windows::Forms::Form
	{
	public:
		BST_mainpage(void)
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
		~BST_mainpage()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// BST_mainpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Name = L"BST_mainpage";
			this->Text = L"BST_mainpage";
			this->Load += gcnew System::EventHandler(this, &BST_mainpage::BST_mainpage_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void BST_mainpage_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Controls->Clear();
				 this->Controls->Add(gcnew BST_intro);
			 }
	};
}

