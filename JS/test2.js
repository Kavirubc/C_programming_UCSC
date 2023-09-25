let count = 0;

function countToBillion() {
    while (count < 1000000000) {
        count++;
    }
    postMessage(count);
}

onmessage = function (event) {
    if (event.data === 'start') {
        countToBillion();
    }
};
