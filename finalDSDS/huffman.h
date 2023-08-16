//#include<iostream>
//#include<fstream>
//#include"huffman.h"
////#include"triTree.h"
//#include<string>
//using namespace std;
///////////////////////////////////////////////////////////////////editor///
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
//int j = 0;
//class n2 {
//public:
//	n2* next[26];
//	bool WE;
//
//};
//
//class n1 {
//public:
//	n1* n;
//	string data;
//
//};
//
//n2* getnode()
//{
//	n2* temp = new n2;
//	temp->WE = false;
//	for (int i = 0;i < 26;i++)
//	{
//		temp->next[i] = nullptr;
//	}
//	return temp;
//}
//
//void insert(n2* root, string word)
//{
//	n2* curr = root;
//	for (int i = 0;i < word.length();i++)
//	{
//		int idx = word[i] - 'a';
//		if (!curr->next[idx])
//		{
//			curr->next[idx] = getnode();
//		}
//		curr = curr->next[idx];
//	}
//	curr->WE = true;
//}
//
//bool search(n2* root, string word)
//{
//	n2* curr = root;
//	for (int i = 0;i < word.length();i++)
//	{
//		int idx = word[i] - 'a';
//		if (curr->next[idx] == nullptr)
//		{
//			return false;
//		}
//		curr = curr->next[idx];
//	}
//	return (curr->WE && curr != nullptr);
//}
//
/////////////////////
////////////////////////////
/////////////////////////////////////////////////////////////
//
//void insert1(string w, n1*& head)
//{
//	if (head == nullptr)
//	{
//		head = new n1;
//		head->n = nullptr;
//		head->data = w;
//	}
//	else
//	{
//		n1* curr = head;
//		while (curr->n != nullptr)
//		{
//			curr = curr->n;
//		}
//		n1* temp = new n1;
//		curr->n = temp;
//		temp->n = nullptr;
//		temp->data = w;
//
//	}
//}
//bool Mylastnode(n2* root)
//{
//	for (int i = 0;i < 26;i++)
//	{
//		if (root->next[i])
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//void suggestionr(n2* root, string word, n1*& head)
//{
//
//	if (j == 10)
//	{
//		return;
//	}
//	if (root->WE)
//	{
//		cout << word << endl;
//		insert1(word, head);
//		j++;
//	}
//	for (int i = 0;i < 26;i++)
//	{
//		if (root->next[i])
//		{
//			char c = 'a' + i;
//			suggestionr(root->next[i], word + c, head);
//
//		}
//	}
//}
//int PrintSuggestion(n2* root, string word, n1*& head)
//{
//	n2* curr = root;
//	for (char c : word)
//	{
//		int idx = c - 'a';
//		if (!curr->next[idx])
//		{
//			return 0;
//		}
//		curr = curr->next[idx];
//
//	}
//
//	if (Mylastnode(curr))
//	{
//		cout << word;
//		return -1;
//	}
//	suggestionr(curr, word, head);
//
//}
/////////////////////////////////////editor end/////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////
/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////
//// ////////////////////////////////////////
///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////
//
//
//
//using namespace std;
//string arr[27];
//struct n3
//{
//	char c;
//	int freq;
//	n3* next, * left, * right;
//};
//n3* createNode(char c, int freq)
//{
//	n3* temp = new n3;
//	temp->c = c;
//	temp->freq = freq;
//	temp->next = NULL;
//	temp->right = NULL;
//	temp->left = NULL;
//	return temp;
//}
//
//
//void insert(char c, int* freq, n3*& hf)
//{
//	if (hf == NULL)
//	{
//		n3* temp = createNode(c, *freq);
//		temp->next = hf;
//		hf = temp;
//
//	}
//	else
//	{
//		n3* curr = hf;
//		while (curr->next != NULL)
//		{
//			curr = curr->next;
//		}
//		n3* temp = createNode(c, *freq);
//		curr->next = temp;
//		temp->next = NULL;
//
//	}
//}
//
//void assigning(string str, int* freq, int length, n3*& head)
//{
//	for (int i = 0; i < length; i++)
//	{
//		if (str[i] != '0')
//		{
//			insert(str[i], &freq[i], head);
//		}
//	}
//}
//
//void sort(n3*& head)
//{
//	n3* curr = head;
//	n3* curr1 = head;
//	int count = 0;
//	while (curr1 != NULL)
//	{
//		count++;
//		curr1 = curr1->next;
//	}
//	for (int i = 0; i < count; i++)
//	{
//		n3* curr = head;
//		while (curr->next != nullptr)
//		{
//			if (curr->freq > curr->next->freq)
//			{
//				swap(curr->freq, curr->next->freq);
//				swap(curr->c, curr->next->c);
//
//			}
//			curr = curr->next;
//		}
//
//	}
//
//
//
//}
//void huffmaninsertion(n3* temp, n3*& head)
//{
//	n3* curr = head;
//	while (curr->next != NULL)
//	{
//		curr = curr->next;
//	}
//	curr->next = temp;
//}
//
//void huffman(n3*& head)
//{
//	while (head->next != NULL)
//	{
//		n3* curr = head;
//		int xfreq = curr->freq + curr->next->freq;
//		n3* temp = createNode('*', xfreq);
//		temp->left = curr;
//		temp->right = curr->next;
//		huffmaninsertion(temp, head);
//		if (curr->next != NULL)
//		{
//			head = curr->next->next;
//		}
//		sort(*&head);
//	}
//}
////codding in the file
//void movtoarr(string a, char c)
//{
//	if (c != ' ')
//	{
//		int ind = c - 'a';
//		arr[ind] = a;
//	}
//	else
//	{
//		arr[26] = a;
//	}
//}
//string getc(char c)
//{
//	if (c != ' ')
//	{
//		int ind = c - 'a';
//		return arr[ind];
//	}
//	else
//	{
//		return arr[26];
//	}
//}
//void storetofile(n3* head, string st)
//{
//	ofstream out;
//	out.open("encode.txt", ios::app);
//	for (int i = 0;i < st.length();i++)
//	{
//		out << getc(st[i]) << " ";
//	}
//}
//
//void creatingCodeOfChThroughHuffmanTree(n3* head, string str)
//{
//	if (head == NULL)
//		return;
//
//	if (head->c == '*')
//	{
//		creatingCodeOfChThroughHuffmanTree(head->left, str + "0");
//		creatingCodeOfChThroughHuffmanTree(head->right, str + "1");
//	}
//
//	if (head->c != '*')
//	{
//		movtoarr(str, head->c);
//		// cout << head->c << " : " << str << "\n";
//		creatingCodeOfChThroughHuffmanTree(head->left, str + "0");
//		creatingCodeOfChThroughHuffmanTree(head->right, str + "1");
//	}
//}
/////////
//
////decoding the encoded data in teh file
//void DecodingOfHufman(n3* head)
//{
//	ifstream n;
//	n3* h = head;
//	n.open("encode.txt");
//	string k;
//	while (!(n.eof()))
//	{
//		h = head;
//		n >> k;
//		for (int i = 0;i < k.length();i++)
//		{
//			char a = k[i];
//			if (a == '0')
//			{
//				h = h->left;
//			}
//			else if (a == '1')
//			{
//				h = h->right;
//			}
//		}
//		cout << h->c;
//	}
//}
//
//
///////////////////////////////////////////
///////////////////////
////////////////////////////////
////////////////////////////
///////////////////////////////////////////////////
//
//void fun(n3* &hf,string st)
//{
//
//
//	string copy;
//	copy = st;
//
//	int i, j, length = st.length();
//	int* freq = new int[length];
//
//	for (i = 0; i < length; i++)
//	{
//		freq[i] = 1;
//		for (j = i + 1; j < length; j++)
//		{
//			if (st[i] == st[j])
//			{
//				freq[i]++;
//				//Set string[j] to 0 to avoid printing visited character  
//				st[j] = '0';
//			}
//		}
//	}
//	//Displays the each character and their corresponding frequency  
//	assigning(st, freq, length, hf);
//	sort(hf);
//	huffman(hf);
//	creatingCodeOfChThroughHuffmanTree(hf, "");
//	storetofile(hf, copy);
//	
//	
//}
//
//int main()
//{
//
//	n3* hf = NULL;
//	
//	ifstream in;
//	in.open("outfile.txt");
//	string a;
//	n2* root = getnode();
//	while (!(in.eof()))
//	{
//		getline(in, a);
//		insert(root, a);
//	}
//	
//	n1* head = nullptr;
//	int op;
//	cout << "1)To Start from last\n2)TO start From new notepad";
//	cin >> op;
//	if (op == 1)
//	{
//		ifstream input;
//		string get;
//		input.open("Notepad.txt");
//		while (!(input.eof()))
//		{
//			getline(input, get);
//			cout << get;
//		}
//		input.close();
//
//	}
//	else if (op == 2)
//	{
//		ofstream o;
//		o.open("Notepad.txt");
//		o << " ";
//		o.close();
//	}
//	system("pause");
//	string msg1, ch, msg2;
//	bool m = true;
//	while (1) {
//		system("cls");
//		ifstream inp;
//
//		system("pause");
//		hf = nullptr;
//		ofstream oi;
//		oi.open("encode.txt");
//		oi << " ";//after the alteration the file will remve all code and recreate and store
//		oi.close();
//
//		inp.open("Notepad.txt");
//		string get;
//		while (!(inp.eof()))
//		{
//			getline(inp, get);
//			cout << get;
//		}
//		inp.close();
//		cin >> msg1;
//		PrintSuggestion(root, msg1, head);
//		j = 0;
//		msg2 = head->data;
//
//		cout << "By default you have selected suggestion 1 Press / to move to next suggestion" << endl << " else press ; to select a suggestion" << endl << "To skip suggestion press 1" << endl;
//		int count = 1;
//		m = true;
//		while (m && count <= 10)
//		{
//			cin >> ch;
//			if (ch == "/") {
//				ofstream out;
//				out.open("Notepad.txt", ios::app);
//				head = head->n;
//				cout << "your on suggestion :" << count << endl;
//				count++;
//			}
//			else if (ch == ";")
//			{
//				ofstream out;
//				out.open("Notepad.txt", ios::app);
//				msg2 = head->data;
//				out << " " << msg2;
//				out.close();
//				ifstream ino;
//				ino.open("Notepad.txt");
//				string g;
//				while (!(ino.eof()))
//				{
//					getline(ino, g);
//				}
//				fun(hf, g);
//
//				
//				m = false;
//			}
//			else if (ch == "1")
//			{
//				ofstream out;
//				out.open("Notepad.txt", ios::app);
//				out << " " << msg1;
//				out.close();
//
//
//				ifstream ino;
//				ino.open("Notepad.txt");
//				string g;
//				while (!(ino.eof()))
//				{
//					getline(ino, g);
//				}
//
//				fun(hf, g);
//
//				m = false;
//			}
//
//		}
//		head = nullptr;
//		cout << "\n 1)Stop editing else any key :";
//		string a;
//		cin >> a;
//		if (a == "1")
//		{
//			break;
//		}
//		system("cls");
//		DecodingOfHufman(hf);
//
//	}
//
//
//
//
//	
//	//system("pause");
//}
