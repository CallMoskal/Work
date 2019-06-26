program Method_Prm;
const
   e = 0.0001;
var
   i, n: word;
   a, b, S_1, S_2, h, s, x, sch_1, sch_2: real;

function F(x:real):real;
begin
F:=((sqrt(2*x*x+1))/(x+1));
end;

begin
    a:=0.2;
    b:=1.8;
    n:= 2;
    S_1:= 0;
    sch_1:=0;
    sch_2:=0;
    repeat
       S_2:= S_1;
       h:= (b - a)/n;
       x:= a;   s:= 0;
       for  i:= 1  to n  do  begin
          s:= s + F(x);
          x:= x + h;
          sch_1:=sch_1+1;
        end;
        S_1:= s*h;
        n:= n*2
     until   abs(S_1 - S_2)<e;
    writeln('S=', S_1:0:6);
    writeln('n1=', sch_1:0:6);

    h:=0;
    n:=2;
    S_1:=0;//итоговый интеграл
    h:=(b-a)/n;//шаг
    S_2:=h*F(a);//текущий интеграл
    repeat
    S_1:=S_2;//запомним текущий
    h:=(b-a)/n;
    x:=a;//левый край
    for i:=1 to n-1 do
     begin
      x:=x+h;//наращиваем
      if i mod 2 = 0 then S_2:=S_2+2*F(x)//считаем новый интеграл
      else S_2:=S_2+4*f(x);
      sch_2:=sch_2+1;
     end;
    S_2:=(S_2+F(a)+F(b))*h/3;//конечное значение
    n:=n*2;//если точность не достигнута удваиваем количество разбиений
    until abs(S_1-S_2)<=e;
    writeln('S=',S_2:0:6);
    writeln('n2=', sch_2:0:6);
readln;
end.
