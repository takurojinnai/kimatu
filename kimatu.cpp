// kimatu.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//
#include<stdio.h>
#include "stdafx.h"
struct quizu {
	int number;

};

void File();

int n = 0;

int main(void)
{

	
	
	quizu x, a, b, c, d, e, f, g, h, i, j;

	int x_1, a_1, b_1, c_1, d_1, e_1, f_1, g_1, h_1, i_1, j_1;

	

	a_1 = 0;
	while (1) {
		fprintf_s(stdout, "キリンの睡眠時間は？ 1:8時間、2:20時間、3:20分\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			a_1 = 1;
			break;
		}
	}


	b_1 = 0;
	while (1) {
		fprintf_s(stdout, "人間とバナナのDNAは何％一致するか？ 1:5％、2:20％、3:50％\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			b_1 = 1;
			break;
		}
	}

	c_1 = 0;
	while (1) {
		fprintf_s(stdout, "ミツバチが1匹が一生集められる蜜の量は？ 1:5グラム、2:500グラム、3:5キログラム\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			c_1 = 1;
			break;
		}
	}

	d_1 = 0;
	while (1) {
		fprintf_s(stdout, "アンパンマンの中身は？ 1:粒あん、2:こしあん、3:ジャムおじさん\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			d_1 = 1;
			break;
		}
	}

	e_1 = 0;
	while (1) {
		fprintf_s(stdout, "魚のタラはギリシャ語で何という？ 1:バカヤロウ、2:マヌケヤロウ、3:トンチンカン\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			e_1 = 1;
			break;
		}
	}

	f_1 = 0;
	while (1) {
		fprintf_s(stdout, "チゲ鍋のチゲはどういう意味？ 1:辛い、2:鍋、3:うまい\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 2) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			f_1 = 1;
			break;
		}
	}

	g_1 = 0;
	while (1) {
		fprintf_s(stdout, "スティーブン・スピルバーグの作品は？ 1:ジョーズ、2:E.T、3:ジュラシックパーク\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			g_1 = 1;
			break;
		}
	}

	h_1 = 0;
	while (1) {
		fprintf_s(stdout, "ちびまる子ちゃんのお姉ちゃんの名前は？ 1:すみれ、2:さきこ、3:こたけ\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 2) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			h_1 = 1;
			break;
		}
	}

	i_1 = 0;
	while (1) {
		fprintf_s(stdout, "マリオのオーバーオールは昔何色だったか？ 1:赤色、2:白色、3:緑色\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 1) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			i_1 = 1;
			break;
		}
	}

	j_1 = 0;
	while (1) {
		fprintf_s(stdout, "世界１売れたゲームとは？ 1:スーパーマリオブラザーズ、2:ポケットセンター、3:テトリス\n==>");
		scanf_s("%d", &x_1);
		if (x_1 == 3) {
			fprintf_s(stdout, "正解\n");
			n++;
			break;
		}
		else {
			fprintf_s(stdout, "不正解\n");
			j_1 = 1;
			break;
		}
	}
	
	File();
	fprintf_s(stdout, "\ntxtファイルで正解数を確認しよう！\n",n);
	return 0;
}

void File() {

	FILE*fp;

	errno_t error;
	error = fopen_s(&fp, "result.txt", "w");
	if (error != 0)
		fprintf_s(stderr, "failed to open");
	else {

		//txtファイルに表示
		fprintf(fp, "10問中%d問正解でした！！\n", n);

		fclose(fp);
	}
}