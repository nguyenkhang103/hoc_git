#include <string>
#include <iostream>
using namespace std;
struct Date {
	int ngay, thang, nam;
};
class NhanVien
{

public:
	NhanVien();
	NhanVien(wstring hoten, wstring chucvu, Date ngaysinh, float hesoluong);
	~NhanVien();
	wstring getHoTen();
	wstring getChucVu();
	Date getNgaySinh();
	float getHeSoLuong();
	void setHoTen(wstring ht);
	void setChucVu(wstring cv);
	void setNgaySinh(Date ns);
	void setHeSoLuong(float hsl);
	void hienThi();
	bool operator==(const NhanVien& nv) const;

private:
	wstring hoten;
	wstring chucvu;
	Date ngaysinh;
	float hesoluong;
};



