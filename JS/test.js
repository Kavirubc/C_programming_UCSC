
function count(){
    console.time('counting');
    for (let i = 0; i < 20000000000; i++) {
        //console.log(i);
    }
    console.timeEnd('counting');
}

count();
