#pragma once
using namespace System;
using namespace System::Drawing;
#include <ctime>
#include <stdlib.h>
class Casita {
protected:
	int x;
	int y;
	int dx;
	int dy;
	bool estado;
	//Paredes
	int x1;
	int y1;
	//Puerta
	int x2;
	int y2;
	//Ventana
	int x3;
	int y3;
	//Techo1
	int x4;
	int y4;
	//Techo2
	int x5;
	int y5;
	//Colores
	int c1;
	int c2;
	int c3;
	int c4;
public:
	Casita();
	inline Casita::Casita(int c1, int c2, int c3, int c4,int x, int y, int dx, int dy, bool estado, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5);
	~Casita();
	int getx() { return x; }
	int gety() { return y; }
	int getdx() { return dx; }
	int getdy() { return dy; }
	bool getestado() { return estado; }
	void setx(int x) { this->x = x; }
	void sety(int y) { this->y = y; }
	//Pared
	void setx1(int x1) { this->x1 = x1; }
	void sety1(int y1) { this->y1 = y1; }
	int getx1() { return x1; }
	int gety1() { return y1; }
	//Puerta
	void setx2(int x2) { this->x2 = x2; }
	void sety2(int y2) { this->y2 = y2; }
	int getx2() { return x2; }
	int gety2() { return y2; }
	//Ventana
	void setx3(int x3) { this->x3 = x3; }
	void sety3(int y3) { this->y3 = y3; }
	int getx3() { return x3; }
	int gety3() { return y3; }
	//Techo1
	void setx4(int x4) { this->x4 = x4; }
	void sety4(int y4) { this->y4 = y4; }
	int getx4() { return x4; }
	int gety4() { return y4; }
	//Techo2
	void setx5(int x5) { this->x5 = x5; }
	void sety5(int y5) { this->y5 = y5; }
	int getx5() { return x5; }
	int gety5() { return y5; }

	void setdx(int dx) { this->dx = dx; }
	void setdy(int dy) { this->dy = dy; }
	void setestado(bool estado) { this->estado = estado; }
	virtual void crearParedes(Graphics^ r) = 0;
	virtual void crearPuerta(Graphics^ r) = 0;
	virtual void crearTecho1(Graphics^ r) = 0;
	virtual void crearTecho2(Graphics^ r) = 0;
	virtual void borrarParedes(Graphics^ r) = 0;;
	virtual void borrarPuerta(Graphics^ r) = 0;
	virtual void borrarTecho1(Graphics^ r) = 0;
	virtual void borrarTecho2(Graphics^ r) = 0;
	virtual void mover(Graphics^ r) = 0;
	virtual void mover2(Graphics^ r) = 0;
	virtual void destruirTodo(Graphics^ r) = 0;
	virtual void dibujarTodo(Graphics^ r) = 0;
};
inline Casita::Casita() {
	x = 0;
	y = 0;
	dx = 5;
	dy = 5;
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
	x3 = 0;
	y3 = 0;
	x4 = 0;
	y4 = 0;
	x5 = 0;
	y5 = 0;
	estado = true;
}
inline Casita::Casita(int c1, int c2, int c3, int c4, int x, int y, int dx, int dy, bool estado, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->dy = dy;
	this->x1 = x1;
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
	this->x4 = x4;
	this->y4 = y4;
	this->x5 = x5;
	this->y5 = y5;
	this->c1 = c1;
	this->c2 = c2;
	this->c3 = c3;
	this->c4 = c4;
}
inline Casita::~Casita() {}