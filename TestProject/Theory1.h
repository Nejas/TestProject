#pragma once
#include "Header.h"
#include "Test1.h"
#include "Rezult.h"
namespace TestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Theory1
	/// </summary>
	public ref class Theory1 : public System::Windows::Forms::Form
	{
	public:
		Theory1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Theory1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn3;


	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(1217, 536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 60);
			this->button1->TabIndex = 4;
			this->button1->Text = L"выйти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Theory1::button1_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Dock = System::Windows::Forms::DockStyle::Left;
			this->webBrowser1->Location = System::Drawing::Point(0, 0);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(989, 1008);
			this->webBrowser1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(1028, 179);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(534, 106);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Методы моделирования\r\nИммитационный метод";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::YellowGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(1217, 454);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 63);
			this->button2->TabIndex = 3;
			this->button2->Text = L"начать тест";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Theory1::button2_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(1027, 435);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(115, 43);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1 глава";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Visible = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Theory1::btn1_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(1027, 571);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(115, 43);
			this->btn3->TabIndex = 2;
			this->btn3->Text = L"3 глава";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Theory1::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(1027, 504);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(115, 43);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2 глава";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Theory1::btn2_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(1309, 422);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(115, 25);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Подробнее";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Theory1::linkLabel1_LinkClicked);
			// 
			// Theory1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1612, 1008);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->button1);
			this->Name = L"Theory1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Theory1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Theory1::Theory1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Owner->Show();
		this->Close();
	}
	private: System::Void Theory1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		if (user::autorization)
		{
			Rezult^ rezult = gcnew Rezult();
			rezult->Owner = this;
			this->Hide();
			rezult->Show();
		}
		else {
			this->Show();
		}
		String^ path = Directory::GetCurrentDirectory() + "\\Теория\\1.html";
		webBrowser1->Navigate("file:///" + path);
	}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ path = Directory::GetCurrentDirectory() + "\\Теория\\1.html";
		webBrowser1->Navigate("file:///" + path);
		btn1->Visible = false;
		btn2->Visible = true;
		btn3->Visible = true;
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ path = Directory::GetCurrentDirectory() + "\\Теория\\2.html";
		webBrowser1->Navigate("file:///" + path);
		btn2->Visible = false;
		btn1->Visible = true;
		btn3->Visible = true;
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ path = Directory::GetCurrentDirectory() + "\\Теория\\3.html";
		webBrowser1->Navigate("file:///" + path);
		btn3->Visible = false;
		btn2->Visible = true;
		btn1->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Test1^ test1 = gcnew Test1();
		test1->Show();
		this->Close();
	}
private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) 
{
	MessageBox::Show("Тест содержит 10 вопросов по данной теме, где на каждый вопрос отведено 5 мин", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	linkLabel1->LinkVisited = true;
}
};
}
