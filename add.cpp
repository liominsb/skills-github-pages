#include <graphics.h>
#include <stdio.h>
#include <easyx.h>
#include<math.h>

ExMessage m;
int a;
int b[30][30];
int main() {
    initgraph(600, 550);
    loadimage(0, "12233.png");

    // »æÖÆÍø¸ñÏß
    for (int i = 1; i <= 21; i++) {
        line(25, i * 25, 525, i * 25);
        line(i * 25, 25, i * 25, 525);
    }
    while (1) {
        m = getmessage(EX_MOUSE);
        if (a % 2 == 0) {
            if (m.message == WM_LBUTTONDOWN) {
                for (int i = 1; i <=21; i++)
                    for (int j = 1; j <=21; j++) {
                        if (abs(m.x - i * 25) <= 12 && abs(m.y - j * 25) <= 12) {
                            if (b[i][j]==0) {
                                setfillcolor(WHITE);
                                solidcircle(i * 25, j * 25, 12);
                                a++;
                                b[i][j] = 1;
                                setbkmode(0); setfillcolor(0x0055AA);
                                solidrectangle(550, 250, 600, 270);
                                outtextxy(550,250,"µ½ºÚÆå");
                            }
                        }
                    }
            }
        }
        else if (m.message == WM_LBUTTONDOWN) {
            for (int i = 1; i <=21; i++)
                for (int j = 1; j <= 21; j++) {
                    if (abs(m.x - i * 25) <= 12 && abs(m.y - j * 25) <= 12) {
                        if (b[i][j] == 0) {
                            setfillcolor(0);
                            solidcircle(i * 25, j * 25, 12);
                            a++;
                            b[i][j] = -1;
                            setbkmode(0); setfillcolor(0x0055AA);
                            solidrectangle(550, 250, 600, 270);
                            outtextxy(550, 250, "µ½°×Æå");
                        }
                    }
                }
        }
        for (int i = 4; i <= 21; i++)
            for (int j = 4; j <= 21; j++) {
                if ((b[i][j] + b[i - 1][j] + b[i - 2][j] + b[i - 3][j] + b[i - 4][j]) == 5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "°×ÆåÊ¤");
                    getchar();
                    return 0;
                }
                if ((b[i][j] + b[i - 1][j] + b[i - 2][j] + b[i - 3][j] + b[i - 4][j]) == -5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "ºÚÆåÊ¤");
                    getchar();
                    return 0;
                }
                if ((b[i][j] + b[i][j - 1] + b[i][j - 2] + b[i][j - 3] + b[i][j - 4]) == 5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "°×ÆåÊ¤");
                    getchar();
                    return 0;
                }
                if ((b[i][j] + b[i][j - 1] + b[i][j - 2] + b[i][j - 3] + b[i][j - 4]) == -5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "ºÚÆåÊ¤");
                    getchar();
                    return 0;
                }
                if ((b[i][j] + b[i - 1][j - 1] + b[i - 2][j - 2] + b[i - 3][j - 3] + b[i - 4][j - 4]) == 5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "°×ÆåÊ¤");
                    getchar();
                    return 0;
                }
                if ((b[i][j] + b[i - 1][j - 1] + b[i - 2][j - 2] + b[i - 3][j - 3] + b[i - 4][j - 4]) == -5) {
                    solidrectangle(550, 250, 600, 270);
                    outtextxy(550, 250, "ºÚÆåÊ¤");
                    getchar();
                    return 0;
                }
            }
    }
    getchar();
    return 0;
}