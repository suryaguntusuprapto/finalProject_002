#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}

	float getPresensi() {
		return presensi;
	}
	//isi disini

	float setActivity(float nilai) {
		this->activity = nilai;
	}
	float getActivity() {
		return activity;
	}

	float setExercise(float nilai) {
		this->exercise = nilai;
	}
	float getExercise() {
		return exercise;
	}

	float getTugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah { //isi disini
public:
	int p;
	int a;
	int e;
	int ua;
	int na;

	void setPresensi(int presensi) {
		this->p = presensi;
	}
	void setActivity(int activity) {
		this->a = activity;
	}
	void setExercise(int exercise) {
		this->e = exercise;
	}
	void setTugasAkhir(int tugasakhir) {
		this->ua = tugasakhir;
	}
	

	void input() {
		cout << "Masukkan Nilai Presensi: ";
		cin >> p;
		setPresensi(p);

		cout << "Masukkan Nilai Activity: ";
		cin >> a;
		setActivity(a);
		
		cout << "Masukkan Nilai Exercise: ";
		cin >> e;
		setExercise(e);

		cout << "Masukkan Nilai Tugas Akhir: ";
		cin >> ua;
		setTugasAkhir(ua);
	}

	float hitungNilaiAkhir() {
		getPresensi() + getActivity() + getExercise() + getTugasAkhir() / 4 * 100;
		return na;
	}

	void cekKelulusan() {
		if (na >= 75) {
			cout << "Selamat Anda Lulus Mata Kuliah Pemprograman";
		}
		else {
			cout << "Anda tidak lulus mata kuliah pemprograman";
		}
	}
};


int main() { //isi disini
	Pemrograman pe;
	char pilihan;
		cout << "Program dibuat" << endl;
		pe.input();
		pe.hitungNilaiAkhir();
		pe.cekKelulusan();

		cout << endl;

		cout << "Apakah anda ingin mengulang program ? [Y / N]";
		cin >> pilihan; 

	return 0;
}