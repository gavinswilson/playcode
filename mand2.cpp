#include <GL/glut.h>    // Header File For The GLUT Library
#include <math.h>
#include <complex.h>

int main (int argc, char *argv[])
{
    //using namespace std::complex_literals;
    int i, j, count;
    float re_max=1.0, re_min=-2.0, im_max=1.0, im_min=-1.0 ; //aspect ratio 3/2
    float real_delta = (re_max - re_min)/750;
    float imag_delta = (im_max - im_min)/500;

    // double complex x = 0.0 + 0.0 * I;
    // double complex z = re_min + im_min * I;
    std::complex<double> x = 0.0 + 0.0*i;
    std::complex<double> z = re_min + im_min*i;

    double absolute_x;

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowPosition(150,150);
    glutInitWindowSize(750,500); // aspect ratio of 3/2
    glutCreateWindow (argv[0]);

    glClearColor (0.5, 0.2, 0.3, 0.0);  // choosing the background color
    glClear (GL_COLOR_BUFFER_BIT);      // setting the color buffer to background color
    glColor4f(0.5,0.7,0.3,0.0);
    glPointSize(0.1);

    for (i=0, z = re_min + im_min * i ; i<750; i++, z = (real(z) + real_delta) + im_min *i)
        {

        for (j=0, z = real(z) + im_min * i; j<500; j++, z = real(z) + (imag(z) + imag_delta) * i)
            {
            count = 0;
            x = 0 + 0*i;

            while ((absolute_x = fabs(x))<=2.0 && count < 64)
            {
                x = (x * x) + z;
                count++;
            }

                if (absolute_x <= 2.0){
                    glBegin(GL_POINTS);
                        glVertex2f(i / 750., j / 500.);;
                    glEnd();
                }
            }
        }

    glFlush();

    glutMainLoop();

    return (0);
}