void euler(int a[][]){
    // tạo mảng CE để ghi chu trình;
    // Khỏi tạo stack s dể xếp các vị trí đã xét;
    // Gán đỉnh u là đỉnh có bậc ra lớn hơn bậc vào 1 đơn vị;

    push(s,u); // cho đỉnh u vào stack;
    while(s != rỗng ){
        // Xét đỉnh V là đỉnh trên cùng của stack;
        for(int i=0;i<=n;i++) if(v kề với i){
            push(s,i); 
            xóa_cạnh(v,i);
            break;
        }
        if(i = n+1){
            // lấy v ra khỏi stack, đẩy v vào CE;
        }
        
    }
    // in ra đường đi CE theo thứ tự ngược lại;
}