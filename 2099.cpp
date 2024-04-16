#include <iostream>
using namespace std;
bool cmp  (long long a, long long b){
    if (b > 0)
        return a >= b;
    else
        return a <= b;
}
bool run()
{
    long long Ax, Ay, Az, Bx, By, Bz, Cx, Cy, Cz, Dx, Dy, Dz;
    cin >> Ax >> Ay >> Az >> Bx >> By >> Bz >> Cx >> Cy >> Cz >> Dx >> Dy >> Dz;
    long long u = Dx - Ax, v = Dy - Ay, w = Dz - Az;
    long long a = Bx - Ax, b = Dx - Cx, c = By - Ay, d = Dy - Cy, e = Bz - Az, f = Dz - Cz;
    if ((Bx - Ax) * (Cx - Dx) + (By - Ay) * (Cy - Dy) + (Bz - Az) * (Cz - Dz) != 0) 
        return false;
    
        
    long long t, s, det;
    if (a * d != b * c)
        t = u * d - b * v, s = v * a - u * c, det = a * d - b * c;
    else if (c * f != d * e)
        t = f * v - d * w, s = c * w - e * v, det = c * f - d * e;
    else if (a * f != b * e)
        t = u * f - b * w, s = a * w - e * u, det = a * f - b * e;
    else
        return false;
    if (!cmp(t, det) || !cmp(s, det)) 
        return false;
    if (t * a + b * s != det * u || t * c + s * d != det * v || t * e + s * f != det * w) 
        return false;
    return true;
}

int main()
{
    if (run())
        cout << "Valid";
    else
        cout << "Invalid";
    
}
