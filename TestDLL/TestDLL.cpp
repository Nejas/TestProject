#include "pch.h"
#include "TestDLL.h"
#include <cmath>
namespace TestDLL
{
	void DataBase::CloseDatabase() {
		String^ filePath = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb; Jet OLEDB : Database Password = 11081977;";		String^ connectionString = Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + connectionString + ";Jet OLEDB:Database Password=11081977;");
		try {
			// Try to open the file in read-only mode
			connection->Open();
		}
		catch (Exception^ e) {
			// If an exception is caught (e.g., file not found, access denied), the file is not open
			connection->Close(); // Close the file stream after checking // If file opened successfully, it's considered open

		}
	}
	bool DataBase::CreateDatabase() {
		// Создаем экземпляр ADOX Catalog
		Catalog^ catalog = gcnew CatalogClass();
		// Строка подключения для ADOX
		String^ connectionString = Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + connectionString + ";Jet OLEDB:Database Password=11081977;");
		if (File::Exists(connectionString))
		{
			connection->Open();
			return false;
		}
		connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + connectionString + ";Jet OLEDB:Database Password=11081977;";
		// Попытка создания базы данных
		try {
			// Создаем базу данных
			catalog->Create(connectionString);
			return true;
		}
		catch (Exception^ ex)
		{
			return false;
			MessageBox::Show(ex->Message);
		}
	}

	void DataBase::CreateTable() {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="
			+ Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb;Jet OLEDB:Database Password=11081977;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {

			connection->Open();

			// Проверяем, существует ли таблица Users
			DataTable^ schemaTable = connection->GetSchema("Tables");
			bool tableExists = false;

			for each (DataRow ^ row in schemaTable->Rows) {
				if (row["TABLE_NAME"]->ToString() == "Users") {
					tableExists = true;
					break;
				}
			}
			if (!tableExists) {
				// Создаем таблицу Users с полями Login, Password, Username, Result
				String^ createTableQuery = "CREATE TABLE Users ([ID] AUTOINCREMENT, [Login] TEXT, [Password] TEXT, [Username] TEXT, [0] INTEGER," +
					"[1] INTEGER,[2] INTEGER,[3] INTEGER,[4] INTEGER,[5] INTEGER,[6] INTEGER,[7] INTEGER,[8] INTEGER,[9] INTEGER)";
				OleDbCommand^ createTableCommand = gcnew OleDbCommand(createTableQuery, connection);
				createTableCommand->ExecuteNonQuery();
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine("Ошибка при создании таблицы: {0}", ex->Message);
		}
		finally {
			connection->Close();
		}
	}
	bool DataBase::AddUser(String^ login, String^ password, String^ username) {
		// Строка подключения к базе данных Access
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="
			+ Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb;Jet OLEDB:Database Password=11081977;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// Проверяем, существует ли пользователь с указанным логином
			String^ checkUserQuery = "SELECT COUNT(*) FROM Users WHERE [Login] = ?";
			OleDbCommand^ checkUserCommand = gcnew OleDbCommand(checkUserQuery, connection);
			checkUserCommand->Parameters->AddWithValue("@Login", login);

			int userCount = (int)checkUserCommand->ExecuteScalar();
			if (userCount > 0) {
				// Пользователь с таким логином уже существует
				return false;
			}

			// Добавляем нового пользователя
			String^ insertQuery = "INSERT INTO Users ([Login], [Password], [Username]) VALUES (?, ?, ?)";
			OleDbCommand^ insertCommand = gcnew OleDbCommand(insertQuery, connection);
			insertCommand->Parameters->AddWithValue("@Login", login);
			insertCommand->Parameters->AddWithValue("@Password", password);
			insertCommand->Parameters->AddWithValue("@Username", username);

			insertCommand->ExecuteNonQuery();
			return true;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
			return false;
		}
		finally {
			connection->Close();
		}
	}
	String^ DataBase::CheckLoginPassword(String^ login, String^ password)
	{
		// Строка подключения к базе данных Access
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="
			+ Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb;Jet OLEDB:Database Password=11081977;";
		// Создаем подключение
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		try {
			connection->Open();

			// SQL-запрос для проверки логина и пароля
			String^ query = "SELECT Username FROM Users WHERE [Login] = ? AND [Password] = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->AddWithValue("@Login", login);
			command->Parameters->AddWithValue("@Password", password);

			// Выполняем запрос
			Object^ result = command->ExecuteScalar();
			if (result != nullptr) {
				// Если совпадение найдено, возвращаем имя пользователя
				return result->ToString();
			}
			else {
				// Если совпадений нет, возвращаем nullptr
				return nullptr;
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine("Ошибка при проверке логина и пароля: {0}", ex->Message);
			return nullptr;
		}
		finally {
			connection->Close();
		}
	}

	void DataBase::AddResult(String^ login, int* mas) {

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="
			+ Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb;Jet OLEDB:Database Password=11081977;";
		// Создаем подключение
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		try {
			// Открываем подключение
			connection->Open();
			// Обновляем результат для пользователя с указанным логином
			String^ updateQuery = "UPDATE Users SET [0] = ?,[1] = ?,[2] = ?,[3] = ?,[4] = ?,[5] = ?,[6] = ?,[7] = ?,[8] = ?,[9] = ? WHERE Login = ?";
			OleDbCommand^ updateCommand = gcnew OleDbCommand(updateQuery, connection);
			for (int i = 0; i < 10; i++)
			{
				String^ key = "@" + i.ToString();
				updateCommand->Parameters->AddWithValue(key, mas[i]);
			}
			updateCommand->Parameters->AddWithValue("@Login", login);

			int rowsAffected = updateCommand->ExecuteNonQuery();
			if (rowsAffected > 0) {
				Console::WriteLine("Результат успешно обновлен для пользователя {0}.", login);
			}
			else {
				Console::WriteLine("Пользователь с логином '{0}' не найден, обновление не выполнено.", login);
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine("Ошибка: {0}", ex->Message);
		}
		finally {
			// Закрываем подключение
			connection->Close();
		}
	}
	int* DataBase::GetResult(String^ login, bool& check) 
	{
		check = true;
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source="
			+ Directory::GetCurrentDirectory() + "\\TestProject\\Users_BD.accdb;Jet OLEDB:Database Password=11081977;";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// SQL-запрос для получения результата по логину
			String^ query = "SELECT [0], [1], [2], [3], [4], [5], [6], [7], [8], [9] FROM Users WHERE [Login] = ?";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->AddWithValue("@Login", login);

			// Выполняем запрос и получаем результат
			OleDbDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				int* rez = new int[10];
				for (int i = 0; i < 10; i++)
				{
					rez[i] = Convert::ToInt16(reader[i.ToString()]);
				}
				return rez;
			}
			else {
				check = false;
				return nullptr; // Если логин не найден, возвращаем -1
			}
		}
		catch (Exception^ ex) {
			Console::WriteLine("Ошибка при получении результата: {0}", ex->Message);
			check = false;
			return nullptr;
		}
		finally {
			connection->Close();
		}
	}

	
	// Tестовые функции
	
	
	bool Test::Check(String^ txt)
	{
		if (txt == "" || txt->Length < 6) return false;
		return true;
	}
	void Test::validation(System::Object^ sender, KeyPressEventArgs^ e) 
	{
		TextBox^ txtBox = (TextBox^)sender;
		if (txtBox->Text == "" && e->KeyChar == 32)
		{
			e->Handled = true;
		}
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != (char)System::Windows::Forms::Keys::Back && e->KeyChar != 32)
			e->Handled = true;
		else if (txtBox->Text == "" && Char::IsLetter(e->KeyChar)) {
			String^ s = Convert::ToString(e->KeyChar)->ToUpper();
			txtBox->Text = s;
			txtBox->SelectionStart = 1;
			e->Handled = true;
		}
	}
	String^ Test::ReadAnswer(CheckBox^ A, CheckBox^ B, CheckBox^ C, CheckBox^ D)
	{
		String^ answer = "";
		if (A->Checked) answer += "A) ";
		if (B->Checked) answer += "B) ";
		if (C->Checked) answer += "C) ";
		if (D->Checked) answer += "D) ";
		return answer;
	}
	bool Test::CheckList(ListBox^ lb1, ListBox^ lb2, ListBox^ lb3, ListBox^ lb4)
	{
		if (lb4->Items[0] == "Метод моделирования, в котором исследуются сложные системы с использованием случайных величин" &&
			lb1->Items[0] == "Метод исследования, при котором система заменяется имитатором для воспроизведения её работы" &&
			lb2->Items[0] == "Модель, использующая уравнения для получения явного решения задачи" &&
			lb3->Items[0] == "Моделирование, при котором объектами являются отдельные агенты с собственным поведением")
			return true;
		else return false;
	}
	void Test::ReadCheckBox(CheckBox^ A, CheckBox^ B, CheckBox^ C, CheckBox^ D, ListBox^ lb)
	{
		int cnt = 4;
		if (A->Checked) { lb->Items[cnt] = A->Text; cnt++; }
		if (B->Checked) { lb->Items[cnt] = B->Text; cnt++; }
		if (C->Checked) { lb->Items[cnt] = C->Text; cnt++; }
		if (D->Checked) { lb->Items[cnt] = D->Text; cnt++; }
		for (int i = 7; i >= cnt; i--)
		{
			lb->Items[i] = "";
		}
	}
	String^ Test::ReadListCheckBox(CheckedListBox^ lb)
	{
		String^ answer = "";
		if (lb->CheckedIndices->Contains(0)) answer += "A) ";
		if (lb->CheckedIndices->Contains(1)) answer += "B) ";
		if (lb->CheckedIndices->Contains(2)) answer += "C) ";
		if (lb->CheckedIndices->Contains(3)) answer += "D) ";
		if (lb->CheckedIndices->Contains(4)) answer += "E) ";
		return answer;
	}
	void Test::output_mas(int* mas, int len, DataGridView^ grid) {
		grid->ColumnCount = 2;
		grid->RowCount = len+2;
		grid->Rows[0]->Cells[0]->Value = "Номер вопроса";
		grid->Rows[0]->Cells[1]->Value = "Ответ";
		int cnt = 0;
		for (int i = 1; i < len+1; i++) {
			grid->Rows[i]->Cells[0]->Value = "Вопрос " + i;
			grid->Rows[i]->Cells[1]->Value = mas[i-1];
			cnt += mas[i - 1];
		}
		grid->Rows[11]->Cells[0]->Value = "Итог";
		grid->Rows[11]->Cells[1]->Value = cnt;
		int width = 0;
		for (int s = 0; s < grid->ColumnCount; s++)
			width += grid->Columns[s]->Width;
		if (width > 1220)
			grid->Width = 1220;
		else
			grid->Width = width;
	}
	int Test::Assessment(int* mas, int len)
	{
		double cnt = 0;
		for (int i = 0; i < len; i++)
		{
			cnt += mas[i];
		}
		return cnt;
	}
}
