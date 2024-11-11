#pragma once
#include "Theory1.h"
#include "Header.h"
#include "Rezult.h"
namespace TestProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace TestDLL;
	using namespace System::Data::OleDb;
	using namespace ADOX;


	/// <summary>
	/// Ñâîäêà äëÿ Autorization
	/// </summary>
	public ref class Autorization : public System::Windows::Forms::Form
	{
	public:
		Autorization(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~Autorization()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;











	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtFam;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ txtError;
	private: System::Windows::Forms::Panel^ plError;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;


































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtFam = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->txtError = (gcnew System::Windows::Forms::Label());
			this->plError = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->plError->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(270, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 41);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Çàðåãèñòðèðîâàòüñÿ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Autorization::button4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(16, 59);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 26);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Èìÿ:";
			// 
			// txtName
			// 
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtName->Location = System::Drawing::Point(130, 53);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(289, 34);
			this->txtName->TabIndex = 11;
			this->txtName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Autorization::txtName_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(16, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Ôàìèëèÿ:";
			// 
			// txtFam
			// 
			this->txtFam->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtFam->Location = System::Drawing::Point(130, 10);
			this->txtFam->Name = L"txtFam";
			this->txtFam->Size = System::Drawing::Size(289, 34);
			this->txtFam->TabIndex = 9;
			this->txtFam->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Autorization::txtName_KeyPress);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(44, 356);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(88, 32);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Íàçàä";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Autorization::button6_Click);
			// 
			// txtError
			// 
			this->txtError->AutoSize = true;
			this->txtError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtError->Location = System::Drawing::Point(-1, 6);
			this->txtError->Name = L"txtError";
			this->txtError->Size = System::Drawing::Size(350, 25);
			this->txtError->TabIndex = 0;
			this->txtError->Text = L"Íåïðàâèëüíûé ëîãèí èëè ïàðîëü!";
			// 
			// plError
			// 
			this->plError->BackColor = System::Drawing::Color::DarkOrange;
			this->plError->Controls->Add(this->txtError);
			this->plError->Location = System::Drawing::Point(1, 390);
			this->plError->Name = L"plError";
			this->plError->Size = System::Drawing::Size(693, 33);
			this->plError->TabIndex = 8;
			this->plError->Visible = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->txtName);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->txtFam);
			this->panel2->Location = System::Drawing::Point(23, 166);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(511, 156);
			this->panel2->TabIndex = 13;
			this->panel2->Visible = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(52, 102);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(199, 41);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Àâòîðèçîâàòüñÿ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Autorization::button5_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkGray;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->txtLogin);
			this->panel1->Controls->Add(this->txtPassword);
			this->panel1->Location = System::Drawing::Point(45, 17);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(582, 272);
			this->panel1->TabIndex = 7;
			// 
			// txtPassword
			// 
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPassword->Location = System::Drawing::Point(153, 126);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(289, 34);
			this->txtPassword->TabIndex = 2;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtLogin
			// 
			this->txtLogin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLogin->Location = System::Drawing::Point(153, 77);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(289, 34);
			this->txtLogin->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(460, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ïîêàçàòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Autorization::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(39, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 26);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ëîãèí:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(39, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ïàðîëü:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(160, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(257, 45);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Àâòîðèçàöèÿ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(249, 14);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 41);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Âîéòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Autorization::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(39, 14);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 41);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Ðåãèñòðèðàöèÿ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Autorization::button3_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(96, 175);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(393, 69);
			this->panel3->TabIndex = 14;
			// 
			// Autorization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(691, 424);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->plError);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Autorization";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ìîäåëèðîâàíèå";
			this->Load += gcnew System::EventHandler(this, &Autorization::MyForm_Load);
			this->plError->ResumeLayout(false);
			this->plError->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool flag = true;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (flag) {
			txtPassword->UseSystemPasswordChar = false;
			button1->Text = "Ñêðûòü";
			flag = false;
		}
		else
		{
			txtPassword->UseSystemPasswordChar = true;
			button1->Text = "Ïîêàçàòü";
			flag = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		user::login = txtLogin->Text;
		String^ password = txtPassword->Text;
		if (!Test::Check(user::login))
		{
			txtError->Text = "Ëîãèí íå ìîæåò áûòü ìåíüøå 6 ñèìâîëîâ!";
			plError->Visible = true; 
			return;
		}
		if (!Test::Check(password) || password == user::login)
		{
			txtError->Text = "Ïàðîëü è ëîãèí íå ìîãóò ñîâïàäàòü èëè áûòü ìåíüøå 6 ñèìâîëîâ!";
			plError->Visible = true; 
			return;
		}
		txtError->Text = "Íåïðàâèëüíûé ëîãèí èëè ïàðîëü!";
		user::FIO = DataBase::CheckLoginPassword(user::login, password);
		if (!user::FIO)
		{
			plError->Visible = true;
			return;
		}
		txtLogin->Clear();
		txtPassword->Clear();
		plError->Visible = false;
		bool check = false;
		user::rez = DataBase::GetResult(user::login, check);
		user::autorization = check;
		Theory1^ a = gcnew Theory1();
		a->Show();
		this->Hide();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		plError->Visible = false;
		label3->Text = "Ðåãèñòðàöèÿ";
		panel1->Height = 272;
		panel2->Visible = true;
		panel3->Visible = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		plError->Visible = false;
		label3->Text = "Àâòîðèçàöèÿ";
		panel1->Height = 200;
		panel3->Visible = true;
		panel2->Visible = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		user::login = txtLogin->Text;
		String^ password = txtPassword->Text;
		if (!Test::Check(user::login))
		{
			txtError->Text = "Ââåäèòå ëîãèí, äëèííà êîòîðîãî íå ìåíüøå 6 ñèìâîëîâ!";
			plError->Visible = true;
			return;
		}
		if (!Test::Check(password))
		{
			txtError->Text = "Ââåäèòå ïàðîëü, äëèííà êîòîðîãî íå ìåíüøå 6 ñèìâîëîâ!";
			plError->Visible = true; 
			return;
		}
		if (password == user::login)
		{
			txtError->Text = "Ââåäèòå ïàðîëü, íå ñîâïàäàþùèé ñ ëîãèíîì!";
			plError->Visible = true;
			return;
		}
		if (txtFam->Text == "" || txtName->Text == "") {
			txtError->Text = "Ââåäèòå ôàìèëèþ è èìÿ!";
			plError->Visible = true;
			return;
		}
		user::FIO = txtFam->Text + " " + txtName->Text;
		txtError->Text = "Ïîëüçîâàòåëü ñ òàêèì ëîãèíîì óæå ñóùåñòâóåò!";
		if (!DataBase::AddUser(user::login, password, user::FIO))
		{
			plError->Visible = true;
			return;
		}
		plError->Visible = false;
		Theory1^ a = gcnew Theory1();
		txtLogin->Clear();
		txtPassword->Clear();
		txtFam->Clear();
		txtName->Clear();
		a->Show();
		this->Hide();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Owner->Show();
		this->Close();
	}
private: System::Void txtName_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	Test::validation(sender, e);
}
};
}
