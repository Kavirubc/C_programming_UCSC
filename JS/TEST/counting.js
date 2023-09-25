const startTime = Date.now();

function countToBillion() {
    let count = 0;
    while (count < 1000000000) {
        count++;
    }
    return count;
}

if (typeof Worker !== 'undefined') {
    // Create a new Web Worker
    const worker = new Worker('worker.js');

    worker.onmessage = function (event) {
        const count = event.data;
        const endTime = Date.now();
        const duration = endTime - startTime;
        console.log(`Count: ${count}`);
        console.log(`Time taken: ${duration} ms`);
    };

    // Start the counting process in the worker
    worker.postMessage('start');
} else {
    console.log("Web Workers are not supported in this environment.");
}
