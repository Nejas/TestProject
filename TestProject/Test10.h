#pragma once
#include "Header.h"
#include "Rezult.h"
namespace TestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace TestDLL;

	/// <summary>
	/// Сводка для Test10
	/// </summary>
	public ref class Test10 : public System::Windows::Forms::Form
	{
	public:
		Test10(void)
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
		~Test10()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::CheckBox^ A;
	private: System::Windows::Forms::CheckBox^ D;


	private: System::Windows::Forms::CheckBox^ C;

	private: System::Windows::Forms::CheckBox^ B;
	private: System::Windows::Forms::Label^ label4;


	private: System::ComponentModel::IContainer^ components;

















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->D = (gcnew System::Windows::Forms::CheckBox());
			this->C = (gcnew System::Windows::Forms::CheckBox());
			this->B = (gcnew System::Windows::Forms::CheckBox());
			this->A = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(480, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(898, 98);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Что может использоваться для графического\r\nпредставления системы\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->D);
			this->groupBox1->Controls->Add(this->C);
			this->groupBox1->Controls->Add(this->B);
			this->groupBox1->Controls->Add(this->A);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(389, 290);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1169, 307);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Выбор ответа (возможен вриант из нескольких ответов):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(164, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 15;
			// 
			// D
			// 
			this->D->AutoSize = true;
			this->D->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->D->Location = System::Drawing::Point(20, 177);
			this->D->Name = L"D";
			this->D->Size = System::Drawing::Size(281, 36);
			this->D->TabIndex = 14;
			this->D->Text = L"D) Условные схемы";
			this->D->UseVisualStyleBackColor = true;
			this->D->CheckedChanged += gcnew System::EventHandler(this, &Test10::radioButton1_CheckedChanged);
			// 
			// C
			// 
			this->C->AutoSize = true;
			this->C->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->C->Location = System::Drawing::Point(20, 138);
			this->C->Name = L"C";
			this->C->Size = System::Drawing::Size(371, 36);
			this->C->TabIndex = 13;
			this->C->Text = L"C) Временные диаграммы";
			this->C->UseVisualStyleBackColor = true;
			this->C->CheckedChanged += gcnew System::EventHandler(this, &Test10::radioButton1_CheckedChanged);
			// 
			// B
			// 
			this->B->AutoSize = true;
			this->B->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B->Location = System::Drawing::Point(20, 98);
			this->B->Name = L"B";
			this->B->Size = System::Drawing::Size(418, 36);
			this->B->TabIndex = 12;
			this->B->Text = L"B) Таблицы булевых функций";
			this->B->UseVisualStyleBackColor = true;
			this->B->CheckedChanged += gcnew System::EventHandler(this, &Test10::radioButton1_CheckedChanged);
			// 
			// A
			// 
			this->A->AutoSize = true;
			this->A->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->A->Location = System::Drawing::Point(20, 59);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(160, 36);
			this->A->TabIndex = 11;
			this->A->Text = L"A) Графы";
			this->A->UseVisualStyleBackColor = true;
			this->A->CheckedChanged += gcnew System::EventHandler(this, &Test10::radioButton1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(38, 246);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 32);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Ваш ответ: ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(747, 629);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Проверить ответ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Test10::button1_Click);
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
			this->button2->Text = L"Закончить тест";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Test10::button2_Click);
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
			this->timer1->Tick += gcnew System::EventHandler(this, &Test10::timer1_Tick);
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
			this->label3->Text = L"Осталось времени:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->progressBar1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(389, 81);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(728, 77);
			this->groupBox2->TabIndex = 14;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Таймер";
			// 
			// Test10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1924, 723);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Test10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вопрос 10";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Test10::Test10_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ answer = "Ваш ответ: ";
	private: System::Void Test10_Load(System::Object^ sender, System::EventArgs^ e)
	{
		timer1->Start();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		label2->Text = answer + Test::ReadAnswer(A, B, C, D);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (A->Checked + B->Checked + C->Checked + D->Checked == false)
			MessageBox::Show("Не выбран вариант ответа!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (A->Checked * !B->Checked * C->Checked * D->Checked == true)
		{
			groupBox1->Enabled = false;
			button2->Enabled = true;
			button1->Enabled = false;
			timer1->Stop();
			MessageBox::Show("Правильный ответ!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			user::rez[9] = 1;
		}
		else
		{
			groupBox1->Enabled = false;
			button2->Enabled = true;
			button1->Enabled = false;
			timer1->Stop();
			MessageBox::Show("Неправильный ответ.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			user::rez[9] = 0;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		DataBase::AddResult(user::login, user::rez);
		Rezult^ rezult = gcnew Rezult();
		rezult->Show();
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
			MessageBox::Show("Время вышло!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			button1->PerformClick();
		}
	}
	};
}

