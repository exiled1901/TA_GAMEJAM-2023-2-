#pragma once
#include "Casita.h"

class Casita1 : public Casita {
public:
	Casita1(int x, int y);
	~Casita1();

	inline void crearParedes(Graphics^ r);
	void borrarParedes(Graphics^ r) {
		SolidBrush^ myBrush = gcnew SolidBrush(Color::White);
		r->DrawRectangle(Pens::White, x1, y1, 175, 50);
		r->FillRectangle(myBrush, x1, y1, 175, 50);
		r->DrawLine(Pens::White, x1 + 75, y1, x1 + 75, y1 + 50);
	}
	void crearPuerta(Graphics^ r) {
		SolidBrush^ myBrush = gcnew SolidBrush(Color::FromArgb(c3, c4, c1));
		r->DrawRectangle(Pens::Black, x2 + 15, y2 + 15, 25, 35);
		r->FillRectangle(myBrush, x2 + 15, y2 + 15, 25, 35);

	}
	void borrarPuerta(Graphics^ r) {
		SolidBrush^ myBrush = gcnew SolidBrush(Color::White);
		r->DrawRectangle(Pens::White, x2 + 15, y2 + 15, 25, 35);
		r->FillRectangle(myBrush, x2 + 15, y2 + 15, 25, 35);

	}
	inline void crearVentana(Graphics^ r);
	void borrarVentana(Graphics^ r) {
		r->DrawRectangle(Pens::White, x3 + 85, y3 + 15, 50, 15);
		r->FillRectangle(Brushes::White, x3 + 85, y3 + 15, 50, 15);
	}
	inline void crearTecho1(Graphics^ r);
	void borrarTecho1(Graphics^ r) {
		Random rA;
		int rR = rA.Next(255);
		int rG = rA.Next(255);
		int rB = rA.Next(255);
		SolidBrush^ myBrush = gcnew SolidBrush(Color::White);
		r->DrawLine(Pens::White, x4 + 37, y4 - 40, x4, y4);
		r->DrawLine(Pens::White, x4, y4, x4 + 75, y4);
		r->DrawLine(Pens::White, x4 + 37, y4 - 40, x4 + 75, y4);
		array<Point>^ trianglePoints = gcnew array<Point>(3);
		trianglePoints[0] = Point(x4, y4);                // V�rtice 1
		trianglePoints[1] = Point(x4 + 75, y4);           // V�rtice 2
		trianglePoints[2] = Point(x4 + 37, y4 - 40);        // V�rtice 3
		r->FillPolygon(myBrush, trianglePoints);
	}
	inline void crearTecho2(Graphics^ r);
	void borrarTecho2(Graphics^ r) {
		r->DrawLine(Pens::White, x5 + 37, y5 - 40, x5 + 132, y5 - 40);
		r->DrawLine(Pens::White, x5 + 132, y5 - 40, x5 + 175, y5);
		r->DrawLine(Pens::White, x5 + 75, y5, x5 + 175, y5);
		r->DrawLine(Pens::White, x5 + 37, y5 - 40, x5 + 75, y5);
		r->DrawLine(Pens::White, x5 + 42, y5 - 35, x5 + 140, y5 - 35);
		r->DrawLine(Pens::White, x5 + 47, y5 - 30, x5 + 145, y5 - 30);
		r->DrawLine(Pens::White, x5 + 52, y5 - 25, x5 + 150, y5 - 25);
		r->DrawLine(Pens::White, x5 + 57, y5 - 20, x5 + 155, y5 - 20);
		r->DrawLine(Pens::White, x5 + 62, y5 - 15, x5 + 160, y5 - 15);
		r->DrawLine(Pens::White, x5 + 67, y5 - 10, x5 + 165, y5 - 10);
		r->DrawLine(Pens::White, x5 + 72, y5 - 5, x5 + 170, y5 - 5);
		r->DrawLine(Pens::White, x5 + 55, y5 - 40, x5 + 90, y5);
		r->DrawLine(Pens::White, x5 + 70, y5 - 40, x5 + 105, y5);
		r->DrawLine(Pens::White, x5 + 85, y5 - 40, x5 + 120, y5);
		r->DrawLine(Pens::White, x5 + 100, y5 - 40, x5 + 135, y5);
		r->DrawLine(Pens::White, x5 + 115, y5 - 40, x5 + 150, y5);
	}
	void mover(Graphics^ r) {
		//Pared

		if (x1 < x) {
			x1++;
		}
		else if (x1 > x) {
			x1--;
		}
		if (y1 < y) {
			y1++;
		}
		else if (y1 > y) {
			y1--;
		}
		//Puerta
		if (x2 < x) {
			x2++;
		}
		else if (x2 > x) {
			x2--;
		}
		if (y2 < y) {
			y2++;
		}
		else if (y2 > y) {
			y2--;
		}
		//Ventana
		if (x3 < x) {
			x3++;
		}
		else if (x3 > x) {
			x3--;
		}
		if (y3 < y) {
			y3++;
		}
		else if (y3 > y) {
			y3--;
		}
		//Techo1
		if (x4 < x) {
			x4++;
		}
		else if (x4 > x) {
			x4--;
		}
		if (y4 < y) {
			y4++;
		}
		else if (y4 > y) {
			y4--;
		}
		//Techo2
		if (x5 < x) {
			x5++;
		}
		else if (x5 > x) {
			x5--;
		}
		if (y5 < y) {
			y5++;
		}
		else if (y5 > y) {
			y5--;
		}
	}
	void dibujar(Graphics^ r) {
		crearParedes(r);
		crearVentana(r);
		crearPuerta(r);
		crearTecho1(r);
		crearTecho2(r);
	}
	void borrar(Graphics^ r) {
		borrarParedes(r);
		borrarPuerta(r);
		borrarVentana(r);
		borrarTecho1(r);
		borrarTecho2(r);
	}
	void dibujarTodo(Graphics^ r) {
		borrar(r);
		mover(r);
		dibujar(r);
	}
	void mover2(Graphics^ r) {
		//Pared
		if (x1 > -100) {
			x1 -= 8;
		}
		if (y1 > -100) {
			y1 -= 10;
		}
		//Puerta
		if (y2 > -100) {
			y2-=8;
		}
		//Ventana
		if (x3 < 900) {
			x3+=10;
		}
		if (y3 > -100) {
			y3-=10;
		}
		//Techo1
		if (y4 > -100) {
			y4+=10;
		}
		//Techo2
		if (x5 > -100) {
			x5-=8;
		}
		if (y5 <700) {
			y5+=10;
		}

	}
	void destruirTodo(Graphics^ r) {
		borrar(r);
		mover2(r);
		dibujar(r);
	}
};
inline Casita1::Casita1(int x, int y) :Casita(c1, c2, c3, c4, x, y, 5, 5, true, x1, y1, x2, y2, x3, y3, x4, y4, x5, y5)
{
	Random rA;
	x = x;
	y = y;
	//Pared
	x1 = 1;
	y1 = 200;
	//Puerta
	x2 = 500;
	y2 = 200;
	//Ventana
	x3 = 550;
	y3 = 100;
	//Techo1
	x4 = 300;
	y4 = 42;
	//Techo2
	x5 = 280;
	y5 = 450;
	c1 = rA.Next(255);
	c2 = rA.Next(255);
	c3 = rA.Next(255);
	c4 = rA.Next(255);

}
inline Casita1::~Casita1() {}
inline void Casita1::crearParedes(Graphics^ r) {
	SolidBrush^ myBrush = gcnew SolidBrush(Color::FromArgb(c1, c2, c3));
	r->DrawRectangle(Pens::Black, x1, y1, 175, 50);
	r->FillRectangle(myBrush, x1, y1, 175, 50);
	r->DrawLine(Pens::Black, x1 + 75, y1, x1 + 75, y1 + 50);
}
inline void Casita1::crearVentana(Graphics^ r) {
	SolidBrush^ myBrush = gcnew SolidBrush(Color::FromArgb(c4, c1, c3));
	r->DrawRectangle(Pens::Black, x3 + 85, y3 + 15, 50, 15);
	r->FillRectangle(myBrush, x3 + 85, y3 + 15, 50, 15);
}
inline void Casita1::crearTecho1(Graphics^ r) {
	SolidBrush^ myBrush = gcnew SolidBrush(Color::FromArgb(c2, c3, c4));
	r->DrawLine(Pens::Black, x4 + 37, y4 - 40, x4, y4);
	r->DrawLine(Pens::Black, x4, y4, x4 + 75, y4);
	r->DrawLine(Pens::Black, x4 + 37, y4 - 40, x4 + 75, y4);
	array<Point>^ trianglePoints = gcnew array<Point>(3);
	trianglePoints[0] = Point(x4, y4);                // V�rtice 1
	trianglePoints[1] = Point(x4 + 75, y4);           // V�rtice 2
	trianglePoints[2] = Point(x4 + 37, y4 - 40);        // V�rtice 3
	r->FillPolygon(myBrush, trianglePoints);
}
inline void Casita1::crearTecho2(Graphics^ r) {
	r->DrawLine(Pens::Black, x5 + 37, y5 - 40, x5 + 132, y5 - 40);
	r->DrawLine(Pens::Black, x5 + 132, y5 - 40, x5 + 175, y5);
	r->DrawLine(Pens::Black, x5 + 75, y5, x5 + 175, y5);
	r->DrawLine(Pens::Black, x5 + 37, y5 - 40, x5 + 75, y5);
	r->DrawLine(Pens::Black, x5 + 42, y5 - 35, x5 + 140, y5 - 35);
	r->DrawLine(Pens::Black, x5 + 47, y5 - 30, x5 + 145, y5 - 30);
	r->DrawLine(Pens::Black, x5 + 52, y5 - 25, x5 + 150, y5 - 25);
	r->DrawLine(Pens::Black, x5 + 57, y5 - 20, x5 + 155, y5 - 20);
	r->DrawLine(Pens::Black, x5 + 62, y5 - 15, x5 + 160, y5 - 15);
	r->DrawLine(Pens::Black, x5 + 67, y5 - 10, x5 + 165, y5 - 10);
	r->DrawLine(Pens::Black, x5 + 72, y5 - 5, x5 + 170, y5 - 5);
	r->DrawLine(Pens::Black, x5 + 55, y5 - 40, x5 + 90, y5);
	r->DrawLine(Pens::Black, x5 + 70, y5 - 40, x5 + 105, y5);
	r->DrawLine(Pens::Black, x5 + 85, y5 - 40, x5 + 120, y5);
	r->DrawLine(Pens::Black, x5 + 100, y5 - 40, x5 + 135, y5);
	r->DrawLine(Pens::Black, x5 + 115, y5 - 40, x5 + 150, y5);
}

