#pragma once
#include "Header.h"
#include "Test6.h"
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
	/// Сводка для Test5
	/// </summary>
	public ref class Test5 : public System::Windows::Forms::Form
	{
	public:
		Test5(void)
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
		~Test5()
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







	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox3;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::LightGray;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->listBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->listBox5);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->listBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->listBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(363, 388);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1399, 394);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сопоставьте значения:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1221, 322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(158, 37);
			this->button6->TabIndex = 27;
			this->button6->Text = L"ввести";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Test5::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1221, 243);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(158, 37);
			this->button5->TabIndex = 26;
			this->button5->Text = L"ввести";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Test5::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1221, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(158, 37);
			this->button4->TabIndex = 25;
			this->button4->Text = L"ввести";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Test5::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1221, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(158, 37);
			this->button3->TabIndex = 24;
			this->button3->Text = L"ввести";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Test5::button3_Click);
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 25;
			this->listBox4->Location = System::Drawing::Point(33, 245);
			this->listBox4->Name = L"listBox4";
			this->listBox4->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox4->Size = System::Drawing::Size(1169, 29);
			this->listBox4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(27, 287);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(298, 32);
			this->label5->TabIndex = 22;
			this->label5->Text = L"4. Метод Монте-Карло";
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 25;
			this->listBox5->Location = System::Drawing::Point(33, 325);
			this->listBox5->Name = L"listBox5";
			this->listBox5->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox5->Size = System::Drawing::Size(1169, 29);
			this->listBox5->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(27, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(354, 32);
			this->label6->TabIndex = 20;
			this->label6->Text = L"3. Мультиагентный подход";
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 25;
			this->listBox3->Location = System::Drawing::Point(33, 160);
			this->listBox3->Name = L"listBox3";
			this->listBox3->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox3->Size = System::Drawing::Size(1169, 29);
			this->listBox3->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(27, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 32);
			this->label2->TabIndex = 18;
			this->label2->Text = L"2. Аналитическая модель";
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13, System::Drawing::FontStyle::Bold));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Location = System::Drawing::Point(33, 82);
			this->listBox2->Name = L"listBox2";
			this->listBox2->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->listBox2->Size = System::Drawing::Size(1169, 29);
			this->listBox2->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(27, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(430, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"1. Имитационное моделирование";
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(754, 805);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Проверить ответ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Test5::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(976, 805);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 50);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Следующий вопрос";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Test5::button2_Click);
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
			this->timer1->Tick += gcnew System::EventHandler(this, &Test5::timer1_Tick);
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
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 31;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Метод моделирования, в котором исследуются сложные системы с использованием случа"
					L"йных величин",
					L"Метод исследования, при котором система заменяется имитатором для воспроизведения"
					L" её работы", L"Модель, использующая уравнения для получения явного решения задачи",
					L"Моделирование, при котором объектами являются отдельные агенты с собственным пове"
					L"дением"
			});
			this->listBox1->Location = System::Drawing::Point(33, 36);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1346, 128);
			this->listBox1->TabIndex = 15;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::LightGray;
			this->groupBox3->Controls->Add(this->listBox1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold));
			this->groupBox3->Location = System::Drawing::Point(363, 193);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1399, 180);
			this->groupBox3->TabIndex = 16;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Варианты ответа:";
			// 
			// Test5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(1924, 956);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Test5";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вопрос 5";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Test5::Test5_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		String^ answer = "Выбранный ответ: ";
	private: System::Void Test5_Load(System::Object^ sender, System::EventArgs^ e)
	{
		timer1->Start();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (listBox1->Items->Count!=0)
			MessageBox::Show("Не выбран вариант ответа!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else if (Test::CheckList(listBox2, listBox3, listBox4, listBox5))
		{
			groupBox1->Enabled = false;
			button2->Enabled = true;
			button1->Enabled = false;
			timer1->Stop();
			MessageBox::Show("Правильный ответ!", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
			user::rez[4] = 1;
		}
		else
		{
			groupBox1->Enabled = false;
			button2->Enabled = true;
			button1->Enabled = false;
			timer1->Stop();
			MessageBox::Show("Неправильный ответ.", "Результат", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			user::rez[4] = 0;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Test6^ test6 = gcnew Test6();
		test6->Show();
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
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (button3->Text == "ввести") {
			int ind = listBox1->SelectedIndex;
			if (ind == -1) 			MessageBox::Show("Выберите вариант ответа!", "Помощь", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else {
				listBox2->Items->Add(listBox1->Items[ind]->ToString());
				listBox1->Items->RemoveAt(ind);
				button3->Text = "вывести";
			}
		}
		else if (button3->Text == "вывести") {
			listBox1->Items->Add(listBox2->Items[0]->ToString());
			listBox2->Items->RemoveAt(0);
			button3->Text = "ввести";
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (button4->Text == "ввести") {
		int ind = listBox1->SelectedIndex;
		if (ind == -1) 			MessageBox::Show("Выберите вариант ответа!", "Помощь", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			listBox3->Items->Add(listBox1->Items[ind]->ToString());
			listBox1->Items->RemoveAt(ind);
			button4->Text = "вывести";
		}
	}
	else if (button4->Text == "вывести") {
		listBox1->Items->Add(listBox3->Items[0]->ToString());
		listBox3->Items->RemoveAt(0);
		button4->Text = "ввести";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (button5->Text == "ввести") {
		int ind = listBox1->SelectedIndex;
		if (ind == -1) 			MessageBox::Show("Выберите вариант ответа!", "Помощь", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			listBox4->Items->Add(listBox1->Items[ind]->ToString());
			listBox1->Items->RemoveAt(ind);
			button5->Text = "вывести";
		}
	}
	else if (button5->Text == "вывести") {
		listBox1->Items->Add(listBox4->Items[0]->ToString());
		listBox4->Items->RemoveAt(0);
		button5->Text = "ввести";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (button6->Text == "ввести") {
		int ind = listBox1->SelectedIndex;
		if (ind == -1) 			MessageBox::Show("Выберите вариант ответа!", "Помощь", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			listBox5->Items->Add(listBox1->Items[ind]->ToString());
			listBox1->Items->RemoveAt(ind);
			button6->Text = "вывести";
		}
	}
	else if (button6->Text == "вывести") {
		listBox1->Items->Add(listBox5->Items[0]->ToString());
		listBox5->Items->RemoveAt(0);
		button6->Text = "ввести";
	}
}
};
}

