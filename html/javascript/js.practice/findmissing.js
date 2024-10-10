function findmissing(array,n){
    let set =[];
    let missingnumb=[];
    for (let i=1;i<n+1;i++){
        set.push(i);
    }
    for (let i=0;i<set.length;i++){
        if(array.includes(set[i])){
            continue;
        }
        else{
            missingnumb.push(set[i]);
        }
    }
    console.log(missingnumb);
}
let array=[1,2,3,5,7];
let n=8
findmissing(array,n);
