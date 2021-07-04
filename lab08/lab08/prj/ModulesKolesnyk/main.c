float s_calculation(float x, float y, float z)
{
    float res = sqrt(1+fabs(cos(x)))+2*3.14159265358979323846+pow(fabs(z-x)/sin(x),2);
    return res;
}
