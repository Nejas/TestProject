#pragma once
#include "Header.h"
#include "Test2.h"
namespace TestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� Test1
	/// </summary>
	public ref class Test1 : public System::Windows::Forms::Form
	{
	public:
		Test1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Test1()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;



	private: System::ComponentModel::IContainer^ components;

















	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(454, 256);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1169, 322);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� ���������� ���������� �����:";
			// 
			// label2
			// 
			this->label2->AutoEllipsis = true;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(53, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1016, 84);
			this->label2->TabIndex = 12;
			this->label2->Text = L"������������ ��������� ���������� ��� ��������� �������\r\n������.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(57, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(214, 42);
			this->textBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(278, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(800, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������ ������������� ������� � ������������\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(747, 629);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"��������� �����";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Test1::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(969, 629);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 50);
			this->button2->TabIndex = 11;
			this->button2->Text = L"��������� ������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Test1::button2_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::Red;
			this->progressBar1->Location = System::Drawing::Point(252, 31);
			this->progressBar1->Maximum = 300;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(456, 30);
			this->progressBar1->Step = 1;
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 12;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Test1::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(215, 25);
			this->label3->TabIndex = 13;
			this->label3->Text = L"�������� �������:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(389, 91);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(728, 77);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������";
			// 
			// Test1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1924, 723);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Test1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������ 1";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Test1::Test1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Test1_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		timer1->Start();
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	label2->Text = "��������� �����: A";
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	label2->Text = "��������� �����: B";

}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	label2->Text = "��������� �����: C";
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
{
	label2->Text = "��������� �����: D";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{

	if (textBox1->Text == "")
		MessageBox::Show("������� ������� ������!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else if (textBox1->Text->ToLower()->Trim() == "������")
	{
		groupBox1->Enabled = false;
		button2->Enabled = true;
		button1->Enabled = false;
		timer1->Stop();
		MessageBox::Show("���������� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		user::rez[0] = 1;
	}
	else 
	{
		groupBox1->Enabled = false;
		button2->Enabled = true;
		button1->Enabled = false;
		timer1->Stop();
		MessageBox::Show("������������ �����.", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		user::rez[0] = 0;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Test2^ test2 = gcnew Test2();
	test2->Show();
	this->Close();
}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) 
{
	progressBar1->Value += 1;

	if (progressBar1->Value == progressBar1->Maximum)
	{
		timer1->Stop();
		groupBox1->Enabled = false;
		button2->Enabled = true;
		button1->Enabled = false;
		MessageBox::Show("����� �����!", "���������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		button1->PerformClick();
	}
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

