//このコードは、Youtubeにて公開された動画で使用したコードです。
//このコードの改変・再公開は自由ですが、それによる責任は一切とりません。ご了承ください。
//以下のURLがYoutubeの動画のリンクになります。↓
//https://www.youtube.com/watch?v=EcXHAthK-7s

#include <stdio.h>
#include <string.h>

void main(void){
	char pass[100];
	do{
		printf("パスワードを入力して下さい。: ");
		scanf("%s", pass);

		if(strcmp(pass, "r03yluj07")==0){
			printf("パスワードが一致しました。\n");
			break;	
		}

		else{
			printf("パスワードは不適切です。\n\n");
}	

		}while(1);

		printf("\nーーー｜情報｜ーーー\n");
		printf("ユーザー名:Kyenotomia\n");
		printf("誕生日:4月31日\n");
		printf("ステータスメッセージ:この動画が面白かったらチャンネル登録お願いします！！\n");
	}
