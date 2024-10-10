//hello world
//oh hell lord
function isanagram(str1,str2){
    let list = str1.split("");
    for(let i=0;i<str2.length;i++){
        if(list.includes(str2[i])){
            continue;
        }
        else{console.log("these are not anagram");
            break;
        }
        console.log("these words are anagram");
    }
}

let str1="hello world";
let str2="oh hell lord";
isanagram(str1,str2);