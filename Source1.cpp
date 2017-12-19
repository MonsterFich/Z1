
void main()
{
	system("chcp 1251>NUL");
	double h, r, Sïîâíå, S1, l, S2;
	int i;
	cin >> i;
if (i == 1)
{
	ofstream out;
	out.open("D:\\ðåçóëüòàò îá÷èñëåííÿ.txt", ios::app);
	out << "\tðåçóëüòàò îá÷èñëåííÿ\n" << "\nSïîâíå=" << Sïîâíå << "\nSá³÷íå=" << S1 << "\tSêðóãà=" << S2 << "\täîâæèíà êîëà=" << l << endl;
	cout << "\nôàéë çíàõîäèòüñÿ â (Ëîêàëüíèé äèñê D>>Ðåçóëüòàò îá÷èñëåííÿ)" << endl;
}
}
