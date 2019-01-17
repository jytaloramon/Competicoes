#include <stdio.h>
#include <stdlib.h>

int main() {

    int xAlbum, yAlbum, xFoto1, yFoto1, xFoto2, yFoto2; 
    scanf("%d%d%d%d%d%d%d%d",&xAlbum, &yAlbum, &xFoto1, &yFoto1, &xFoto2, &yFoto2);

    if((yFoto1+xFoto2 <= yAlbum && xFoto1<=xAlbum && yFoto2<=xAlbum) || (yFoto1+yFoto2 <= yAlbum && xFoto1<=xAlbum && xFoto2<=xAlbum) 
        ||(xFoto1+xFoto2 <= yAlbum && yFoto1<=xAlbum && yFoto2<=xAlbum) || (yFoto1+yFoto2 <= xAlbum && xFoto1<=yAlbum && xFoto2<=yAlbum)
        ||(xFoto1+xFoto2 <= xAlbum && yFoto1<=yAlbum && yFoto2<=yAlbum) || (yFoto2+xFoto1 <= yAlbum && xFoto2<=xAlbum && yFoto1<=xAlbum) 
        ||(xFoto1+yFoto2 <= xAlbum && yFoto1<=yAlbum && xFoto2<=yAlbum) || (xFoto2+yFoto1 <= xAlbum && yFoto2<=yAlbum && xFoto1<=yAlbum)){
        
            printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}
