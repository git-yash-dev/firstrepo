function testmat (arr,target){
    let rows =arr.length;
    let columns= arr[0].length;
    let left =0;
    let right = rows *columns;
    while (left<=right){
        let mid = Math.floor((left +right)/2);
        let row =Math.floor(mid/columns );
        let column= Math.floor(mid%columns);
        if (arr[row][column] <target){
            left =mid +1;
        }
        else if (arr[row][column]==target ){
            return [row,column];
        }
        else{right= mid -1; }
    }
    return -1;
}
let arr=[[1,5,9],[10,11,13],[12,13,15]];
console.log(testmat(arr,12));
