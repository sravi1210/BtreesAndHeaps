#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace trees {

	/// <summary>
	/// Summary for BST_search
	/// </summary>
	public ref class BST_search : public System::Windows::Forms::UserControl
	{
	public:
		BST_search(void)
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
		~BST_search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lab1;
	protected: 
	private: System::Windows::Forms::Label^  lab2;
	private: System::Windows::Forms::Label^  lab3;
	private: System::Windows::Forms::Label^  lab4;
	private: System::Windows::Forms::Label^  lab5;
	private: System::Windows::Forms::Label^  lab6;
	private: System::Windows::Forms::Label^  lab7;
	private: System::Windows::Forms::Button^  btn_in;
	private: System::Windows::Forms::Button^  btn_pre;
	private: System::Windows::Forms::Button^  btn_post;
	private: System::Windows::Forms::Button^  btn_res;
	private: System::Windows::Forms::Panel^  panel1;
	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape7;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape6;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape5;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape4;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape3;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape2;
	private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
	private: System::Windows::Forms::Label^  bl7;
	private: System::Windows::Forms::Label^  bl6;
	private: System::Windows::Forms::Label^  bl5;
	private: System::Windows::Forms::Label^  bl4;
	private: System::Windows::Forms::Label^  bl3;
	private: System::Windows::Forms::Label^  bl2;
	private: System::Windows::Forms::Label^  bl1;
	private: System::Windows::Forms::Timer^  timer_in;
	private: System::Windows::Forms::Timer^  timer_pre;
	private: System::Windows::Forms::Timer^  timer_pos;
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
			this->lab1 = (gcnew System::Windows::Forms::Label());
			this->lab2 = (gcnew System::Windows::Forms::Label());
			this->lab3 = (gcnew System::Windows::Forms::Label());
			this->lab4 = (gcnew System::Windows::Forms::Label());
			this->lab5 = (gcnew System::Windows::Forms::Label());
			this->lab6 = (gcnew System::Windows::Forms::Label());
			this->lab7 = (gcnew System::Windows::Forms::Label());
			this->btn_in = (gcnew System::Windows::Forms::Button());
			this->btn_pre = (gcnew System::Windows::Forms::Button());
			this->btn_post = (gcnew System::Windows::Forms::Button());
			this->btn_res = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bl7 = (gcnew System::Windows::Forms::Label());
			this->bl6 = (gcnew System::Windows::Forms::Label());
			this->bl5 = (gcnew System::Windows::Forms::Label());
			this->bl4 = (gcnew System::Windows::Forms::Label());
			this->bl3 = (gcnew System::Windows::Forms::Label());
			this->bl2 = (gcnew System::Windows::Forms::Label());
			this->bl1 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->ovalShape7 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape6 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->timer_in = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_pre = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_pos = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lab1
			// 
			this->lab1->AutoSize = true;
			this->lab1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab1->Location = System::Drawing::Point(549, 217);
			this->lab1->Name = L"lab1";
			this->lab1->Size = System::Drawing::Size(41, 29);
			this->lab1->TabIndex = 0;
			this->lab1->Text = L"17";
			// 
			// lab2
			// 
			this->lab2->AutoSize = true;
			this->lab2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab2->Location = System::Drawing::Point(280, 331);
			this->lab2->Name = L"lab2";
			this->lab2->Size = System::Drawing::Size(41, 29);
			this->lab2->TabIndex = 1;
			this->lab2->Text = L"12";
			this->lab2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lab3
			// 
			this->lab3->AutoSize = true;
			this->lab3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab3->Location = System::Drawing::Point(846, 331);
			this->lab3->Name = L"lab3";
			this->lab3->Size = System::Drawing::Size(41, 29);
			this->lab3->TabIndex = 2;
			this->lab3->Text = L"23";
			// 
			// lab4
			// 
			this->lab4->AutoSize = true;
			this->lab4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab4->Location = System::Drawing::Point(102, 484);
			this->lab4->Name = L"lab4";
			this->lab4->Size = System::Drawing::Size(27, 29);
			this->lab4->TabIndex = 3;
			this->lab4->Text = L"4";
			// 
			// lab5
			// 
			this->lab5->AutoSize = true;
			this->lab5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab5->Location = System::Drawing::Point(459, 484);
			this->lab5->Name = L"lab5";
			this->lab5->Size = System::Drawing::Size(41, 29);
			this->lab5->TabIndex = 4;
			this->lab5->Text = L"15";
			// 
			// lab6
			// 
			this->lab6->AutoSize = true;
			this->lab6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab6->Location = System::Drawing::Point(639, 484);
			this->lab6->Name = L"lab6";
			this->lab6->Size = System::Drawing::Size(41, 29);
			this->lab6->TabIndex = 5;
			this->lab6->Text = L"20";
			// 
			// lab7
			// 
			this->lab7->AutoSize = true;
			this->lab7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lab7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lab7->Location = System::Drawing::Point(1052, 484);
			this->lab7->Name = L"lab7";
			this->lab7->Size = System::Drawing::Size(41, 29);
			this->lab7->TabIndex = 6;
			this->lab7->Text = L"47";
			// 
			// btn_in
			// 
			this->btn_in->Location = System::Drawing::Point(1036, 20);
			this->btn_in->Name = L"btn_in";
			this->btn_in->Size = System::Drawing::Size(88, 30);
			this->btn_in->TabIndex = 8;
			this->btn_in->Text = L"Inorder";
			this->btn_in->UseVisualStyleBackColor = true;
			this->btn_in->Click += gcnew System::EventHandler(this, &BST_search::btn_in_Click);
			// 
			// btn_pre
			// 
			this->btn_pre->Location = System::Drawing::Point(1036, 60);
			this->btn_pre->Name = L"btn_pre";
			this->btn_pre->Size = System::Drawing::Size(88, 30);
			this->btn_pre->TabIndex = 9;
			this->btn_pre->Text = L"Preorder";
			this->btn_pre->UseVisualStyleBackColor = true;
			this->btn_pre->Click += gcnew System::EventHandler(this, &BST_search::btn_pre_Click);
			// 
			// btn_post
			// 
			this->btn_post->Location = System::Drawing::Point(1036, 102);
			this->btn_post->Name = L"btn_post";
			this->btn_post->Size = System::Drawing::Size(88, 30);
			this->btn_post->TabIndex = 10;
			this->btn_post->Text = L"Postorder";
			this->btn_post->UseVisualStyleBackColor = true;
			this->btn_post->Click += gcnew System::EventHandler(this, &BST_search::btn_post_Click);
			// 
			// btn_res
			// 
			this->btn_res->Location = System::Drawing::Point(1036, 150);
			this->btn_res->Name = L"btn_res";
			this->btn_res->Size = System::Drawing::Size(88, 30);
			this->btn_res->TabIndex = 11;
			this->btn_res->Text = L"Reset";
			this->btn_res->UseVisualStyleBackColor = true;
			this->btn_res->Click += gcnew System::EventHandler(this, &BST_search::btn_res_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->bl7);
			this->panel1->Controls->Add(this->bl6);
			this->panel1->Controls->Add(this->bl5);
			this->panel1->Controls->Add(this->bl4);
			this->panel1->Controls->Add(this->bl3);
			this->panel1->Controls->Add(this->bl2);
			this->panel1->Controls->Add(this->bl1);
			this->panel1->Controls->Add(this->btn_res);
			this->panel1->Controls->Add(this->btn_post);
			this->panel1->Controls->Add(this->btn_pre);
			this->panel1->Controls->Add(this->btn_in);
			this->panel1->Controls->Add(this->lab7);
			this->panel1->Controls->Add(this->lab6);
			this->panel1->Controls->Add(this->lab5);
			this->panel1->Controls->Add(this->lab4);
			this->panel1->Controls->Add(this->lab3);
			this->panel1->Controls->Add(this->lab2);
			this->panel1->Controls->Add(this->lab1);
			this->panel1->Controls->Add(this->shapeContainer1);
			this->panel1->Location = System::Drawing::Point(41, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1156, 557);
			this->panel1->TabIndex = 0;
			// 
			// bl7
			// 
			this->bl7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl7->Location = System::Drawing::Point(690, 47);
			this->bl7->Name = L"bl7";
			this->bl7->Size = System::Drawing::Size(100, 100);
			this->bl7->TabIndex = 6;
			this->bl7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl6
			// 
			this->bl6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl6->Location = System::Drawing::Point(584, 47);
			this->bl6->Name = L"bl6";
			this->bl6->Size = System::Drawing::Size(100, 100);
			this->bl6->TabIndex = 5;
			this->bl6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl5
			// 
			this->bl5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl5->Location = System::Drawing::Point(478, 47);
			this->bl5->Name = L"bl5";
			this->bl5->Size = System::Drawing::Size(100, 100);
			this->bl5->TabIndex = 4;
			this->bl5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl4
			// 
			this->bl4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl4->Location = System::Drawing::Point(372, 47);
			this->bl4->Name = L"bl4";
			this->bl4->Size = System::Drawing::Size(100, 100);
			this->bl4->TabIndex = 3;
			this->bl4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl3
			// 
			this->bl3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl3->Location = System::Drawing::Point(266, 47);
			this->bl3->Name = L"bl3";
			this->bl3->Size = System::Drawing::Size(100, 100);
			this->bl3->TabIndex = 2;
			this->bl3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl2
			// 
			this->bl2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl2->Location = System::Drawing::Point(160, 47);
			this->bl2->Name = L"bl2";
			this->bl2->Size = System::Drawing::Size(100, 100);
			this->bl2->TabIndex = 1;
			this->bl2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bl1
			// 
			this->bl1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bl1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bl1->Location = System::Drawing::Point(54, 47);
			this->bl1->Name = L"bl1";
			this->bl1->Size = System::Drawing::Size(100, 100);
			this->bl1->TabIndex = 0;
			this->bl1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(7) {this->ovalShape7, 
				this->ovalShape6, this->ovalShape5, this->ovalShape4, this->ovalShape3, this->ovalShape2, this->ovalShape1});
			this->shapeContainer1->Size = System::Drawing::Size(1156, 557);
			this->shapeContainer1->TabIndex = 7;
			this->shapeContainer1->TabStop = false;
			// 
			// ovalShape7
			// 
			this->ovalShape7->Location = System::Drawing::Point(78, 461);
			this->ovalShape7->Name = L"ovalShape7";
			this->ovalShape7->Size = System::Drawing::Size(75, 75);
			// 
			// ovalShape6
			// 
			this->ovalShape6->Location = System::Drawing::Point(261, 309);
			this->ovalShape6->Name = L"ovalShape6";
			this->ovalShape6->Size = System::Drawing::Size(75, 75);
			this->ovalShape6->Click += gcnew System::EventHandler(this, &BST_search::ovalShape6_Click);
			// 
			// ovalShape5
			// 
			this->ovalShape5->Location = System::Drawing::Point(442, 460);
			this->ovalShape5->Name = L"ovalShape5";
			this->ovalShape5->Size = System::Drawing::Size(75, 75);
			// 
			// ovalShape4
			// 
			this->ovalShape4->Location = System::Drawing::Point(621, 462);
			this->ovalShape4->Name = L"ovalShape4";
			this->ovalShape4->Size = System::Drawing::Size(75, 75);
			// 
			// ovalShape3
			// 
			this->ovalShape3->Location = System::Drawing::Point(1036, 462);
			this->ovalShape3->Name = L"ovalShape3";
			this->ovalShape3->Size = System::Drawing::Size(75, 75);
			// 
			// ovalShape2
			// 
			this->ovalShape2->Location = System::Drawing::Point(828, 306);
			this->ovalShape2->Name = L"ovalShape2";
			this->ovalShape2->Size = System::Drawing::Size(75, 75);
			// 
			// ovalShape1
			// 
			this->ovalShape1->Location = System::Drawing::Point(531, 193);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(75, 75);
			// 
			// timer_in
			// 
			this->timer_in->Interval = 1500;
			this->timer_in->Tick += gcnew System::EventHandler(this, &BST_search::timer_in_Tick);
			// 
			// timer_pre
			// 
			this->timer_pre->Interval = 1500;
			this->timer_pre->Tick += gcnew System::EventHandler(this, &BST_search::timer_pre_Tick);
			// 
			// timer_pos
			// 
			this->timer_pos->Interval = 1500;
			this->timer_pos->Tick += gcnew System::EventHandler(this, &BST_search::timer_pos_Tick);
			// 
			// BST_search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->panel1);
			this->Name = L"BST_search";
			this->Size = System::Drawing::Size(1264, 673);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		static int var1=0;
		static int var2=0;
		static int var3=0;
	private: System::Void btn_in_Click(System::Object^  sender, System::EventArgs^  e) {
					var1=0;
					var2=0;
					var3=0;
					timer_in->Enabled=false;
					timer_pre->Enabled=false;
					timer_pos->Enabled=false;
					this->bl1->Text="";
					this->bl2->Text="";
					this->bl3->Text="";
					this->bl4->Text="";
					this->bl5->Text="";
					this->bl6->Text="";
					this->bl7->Text="";
					timer_in->Enabled=true;
					this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					
			 }
private: System::Void btn_pre_Click(System::Object^  sender, System::EventArgs^  e) {
					var1=0;
					var2=0;
					var3=0;
					timer_in->Enabled=false;
					timer_pre->Enabled=false;
					timer_pos->Enabled=false;
					this->bl1->Text="";
					this->bl2->Text="";
					this->bl3->Text="";
					this->bl4->Text="";
					this->bl5->Text="";
					this->bl6->Text="";
					this->bl7->Text="";
					this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					timer_pre->Enabled=true;
		 }
private: System::Void btn_post_Click(System::Object^  sender, System::EventArgs^  e) {
					var1=0;
					var2=0;
					var3=0;
					timer_in->Enabled=false;
					timer_pre->Enabled=false;
					timer_pos->Enabled=false;
					this->bl1->Text="";
					this->bl2->Text="";
					this->bl3->Text="";
					this->bl4->Text="";
					this->bl5->Text="";
					this->bl6->Text="";
					this->bl7->Text="";
					this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					timer_pos->Enabled=true;
		 }
private: System::Void btn_res_Click(System::Object^  sender, System::EventArgs^  e) {
					var1=0;
					var2=0;
					var3=0;
					timer_in->Enabled=false;
					timer_pre->Enabled=false;
					timer_pos->Enabled=false;
					this->bl1->Text="";
					this->bl2->Text="";
					this->bl3->Text="";
					this->bl4->Text="";
					this->bl5->Text="";
					this->bl6->Text="";
					this->bl7->Text="";
					this->lab1->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab2->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab3->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab4->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab5->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab6->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
					this->lab7->ForeColor=System::Drawing::SystemColors::ActiveCaptionText;
		 }

private: System::Void timer_in_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(var1==0)
			 {
				 this->bl1->Text=this->lab4->Text;
				 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==1)
			 {
				 this->bl2->Text=this->lab2->Text;
				 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==2)
			 {
				 this->bl3->Text=this->lab5->Text;
				 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==3)
			 {
				 this->bl4->Text=this->lab1->Text;
				 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==4)
			 {
				 this->bl5->Text=this->lab6->Text;
				 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==5)
			 {
				 this->bl6->Text=this->lab3->Text;
				 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1==6)
			 {
				 this->bl7->Text=this->lab7->Text;
				 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var1>=7)
			 {
				 timer_in->Enabled=false;
				 var1=-1;
			 }
			 var1++;
		 }

private: System::Void timer_pre_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(var2==0)
			 {
				 this->bl1->Text=this->lab1->Text;
				 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==1)
			 {
				 this->bl2->Text=this->lab2->Text;
				 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==2)
			 {
				 this->bl3->Text=this->lab4->Text;
				 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==3)
			 {
				 this->bl4->Text=this->lab5->Text;
				 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==4)
			 {
				 this->bl5->Text=this->lab3->Text;
				 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==5)
			 {
				 this->bl6->Text=this->lab6->Text;
				 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2==6)
			 {
				 this->bl7->Text=this->lab7->Text;
				 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var2>=7)
			 {
				 timer_pre->Enabled=false;
				 var2=-1;
			 }
			 var2++;
		 }
private: System::Void timer_pos_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(var3==0)
			 {
				 this->bl1->Text=this->lab4->Text;
				 this->lab4->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==1)
			 {
				 this->bl2->Text=this->lab5->Text;
				 this->lab5->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==2)
			 {
				 this->bl3->Text=this->lab2->Text;
				 this->lab2->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==3)
			 {
				 this->bl4->Text=this->lab6->Text;
				 this->lab6->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==4)
			 {
				 this->bl5->Text=this->lab7->Text;
				 this->lab7->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==5)
			 {
				 this->bl6->Text=this->lab3->Text;
				 this->lab3->ForeColor=System::Drawing::Color::DodgerBlue;
			 }
			 if(var3==6)
			 {
				 this->bl7->Text=this->lab1->Text;
				 this->lab1->ForeColor=System::Drawing::Color::DodgerBlue;;
			 }
			 if(var3>=7)
			 {
				 timer_pos->Enabled=false;
				 var3=-1;
			 }
			 var3++;
		 }
private: System::Void ovalShape6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
