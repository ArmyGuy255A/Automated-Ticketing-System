/* Version Control Table
Date		Time		LastName	ChangeDescription
08JUL17		1700CET		DIEPPA		Added Controls
09JUL17		1200CET		DIEPPA		Added Payment Controls
09JUL17		1220CET		DIEPPA		Adjusted Poster Tile Width
*/

#pragma once
#include "UIFeatureUnavailable.h"

namespace AutomatedTicketingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UIPurchase
	/// </summary>
	public ref class UIPurchase : public System::Windows::Forms::Form
	{
	public:
		UIPurchase(void)
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
		~UIPurchase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label5;


	private: System::ComponentModel::IContainer^  components;
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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"Movie 1", 0));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(L"Movie 2", 1));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(L"Movie 3", 2));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(L"Movie 4", 3));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(L"Movie 5", 4));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UIPurchase::typeid));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(L"1100"));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(L"1200"));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(L"1300"));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(L"1400"));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(L"1500"));
			System::Windows::Forms::ListViewItem^  listViewItem11 = (gcnew System::Windows::Forms::ListViewItem(L"1600"));
			System::Windows::Forms::ListViewItem^  listViewItem12 = (gcnew System::Windows::Forms::ListViewItem(L"1700"));
			System::Windows::Forms::ListViewItem^  listViewItem13 = (gcnew System::Windows::Forms::ListViewItem(L"1800"));
			System::Windows::Forms::ListViewItem^  listViewItem14 = (gcnew System::Windows::Forms::ListViewItem(L"1900"));
			System::Windows::Forms::ListViewItem^  listViewItem15 = (gcnew System::Windows::Forms::ListViewItem(L"2000"));
			System::Windows::Forms::ListViewItem^  listViewItem16 = (gcnew System::Windows::Forms::ListViewItem(L"2100"));
			System::Windows::Forms::ListViewItem^  listViewItem17 = (gcnew System::Windows::Forms::ListViewItem(L"2200"));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 26, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(0, 1333);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(2048, 144);
			this->button1->TabIndex = 5;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UIPurchase::button1_Click);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(2048, 144);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Purchase Your Tickets";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView1
			// 
			this->listView1->Alignment = System::Windows::Forms::ListViewAlignment::SnapToGrid;
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->GridLines = true;
			this->listView1->HideSelection = false;
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5
			});
			this->listView1->LargeImageList = this->imageList1;
			this->listView1->Location = System::Drawing::Point(2, 610);
			this->listView1->Margin = System::Windows::Forms::Padding(6);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(2046, 258);
			this->listView1->TabIndex = 7;
			this->listView1->TileSize = System::Drawing::Size(400, 230);
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"MoviePoster1.jpg");
			this->imageList1->Images->SetKeyName(1, L"MoviePoster2.jpg");
			this->imageList1->Images->SetKeyName(2, L"MoviePoster3.jpg");
			this->imageList1->Images->SetKeyName(3, L"MoviePoster4.jpg");
			this->imageList1->Images->SetKeyName(4, L"MoviePoster5.jpg");
			this->imageList1->Images->SetKeyName(5, L"MoviePoster6.jpg");
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 144);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(2048, 67);
			this->label2->TabIndex = 8;
			this->label2->Text = L"1. Select a Date";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(2, 1);
			this->monthCalendar1->Location = System::Drawing::Point(622, 220);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(0, 535);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(2048, 67);
			this->label3->TabIndex = 10;
			this->label3->Text = L"2. Select a Movie";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(0, 874);
			this->label4->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(2048, 67);
			this->label4->TabIndex = 11;
			this->label4->Text = L"3. Select a Time";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listView2
			// 
			this->listView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView2->HideSelection = false;
			this->listView2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(12) {
				listViewItem6, listViewItem7,
					listViewItem8, listViewItem9, listViewItem10, listViewItem11, listViewItem12, listViewItem13, listViewItem14, listViewItem15,
					listViewItem16, listViewItem17
			});
			this->listView2->Location = System::Drawing::Point(0, 944);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(2046, 65);
			this->listView2->TabIndex = 12;
			this->listView2->TileSize = System::Drawing::Size(170, 50);
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Tile;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->ImageIndex = 0;
			this->button2->ImageList = this->imageList2;
			this->button2->Location = System::Drawing::Point(498, 1146);
			this->button2->MaximumSize = System::Drawing::Size(332, 114);
			this->button2->MinimumSize = System::Drawing::Size(332, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(332, 114);
			this->button2->TabIndex = 13;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UIPurchase::button2_Click);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"applepay.jpg");
			this->imageList2->Images->SetKeyName(1, L"googlewallet.jpg");
			this->imageList2->Images->SetKeyName(2, L"paypal.jpg");
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->ImageIndex = 1;
			this->button3->ImageList = this->imageList2;
			this->button3->Location = System::Drawing::Point(864, 1146);
			this->button3->MaximumSize = System::Drawing::Size(332, 114);
			this->button3->MinimumSize = System::Drawing::Size(332, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(332, 114);
			this->button3->TabIndex = 13;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &UIPurchase::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->ImageIndex = 2;
			this->button4->ImageList = this->imageList2;
			this->button4->Location = System::Drawing::Point(1230, 1146);
			this->button4->MaximumSize = System::Drawing::Size(332, 114);
			this->button4->MinimumSize = System::Drawing::Size(332, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(332, 114);
			this->button4->TabIndex = 13;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &UIPurchase::button4_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 1012);
			this->label5->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(2048, 67);
			this->label5->TabIndex = 11;
			this->label5->Text = L"4. Select a Payment Method";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UIPurchase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2048, 1477);
			this->ControlBox = false;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MinimumSize = System::Drawing::Size(2048, 1477);
			this->Name = L"UIPurchase";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Purchase Tickets";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &UIPurchase::UIPurchase_Load);
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void UIPurchase_Load(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Load the Feature Unavailable Form
	UIFeatureUnavailable ^ form = gcnew UIFeatureUnavailable;
	form->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Load the Feature Unavailable Form
	UIFeatureUnavailable ^ form = gcnew UIFeatureUnavailable;
	form->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Load the Feature Unavailable Form
	UIFeatureUnavailable ^ form = gcnew UIFeatureUnavailable;
	form->ShowDialog();
}
};
}


