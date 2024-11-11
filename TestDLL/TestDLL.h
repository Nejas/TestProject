#pragma once
#using <System.dll>
using namespace System;
using namespace ADOX;
using namespace System::Data::OleDb;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace IO;
namespace TestDLL {
	public ref class DataBase {
	public:
		static int* GetResult(String^ login, bool& check);
		static void CloseDatabase();
		static bool CreateDatabase();
		static void CreateTable();
		static bool AddUser(String^ login, String^ password, String^ username);
		static String^ CheckLoginPassword(String^ login, String^ password);
		static void AddResult(String^ login, int* mas);
	};
	public ref class Test {
	public:
		static String^ ReadAnswer(CheckBox^ A, CheckBox^ B, CheckBox^ C, CheckBox^ D);
		static bool Check(String^ txt);
		static 	void validation(System::Object^ sender, KeyPressEventArgs^ e);
		static bool CheckList(ListBox^ lb1, ListBox^ lb2, ListBox^ lb3, ListBox^ lb4);
		static void ReadCheckBox(CheckBox^ A, CheckBox^ B, CheckBox^ C, CheckBox^ D, ListBox^ lb);
		static String^ ReadListCheckBox(CheckedListBox^ lb);
		static void output_mas(int* mas, int len, DataGridView^ grid);
		static int Assessment(int* mas, int len);
	};
}
