function findlongestWord(sentence){
    wlist=sentence.split(" ");
    let longest=0;
    let longest_word="";
    for (let i=0;i<wlist.length;i++){
        let lengt=wlist[i].length;
        if(longest<lengt){
            longest=lengt;
            longest_word=wlist[i];

        }
    }
    console.log(longest);
    console.log(longest_word);
}
let word="the quick brown fox jumps over the lazy dog thisislong";
findlongestWord(word);
