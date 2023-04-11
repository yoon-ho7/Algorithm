function solution(jobs) {
    jobs.sort((a, b) => a[0] - b[0]
);
  const length = jobs.length;
  const list = [];
  let time = 0;
  let lastTime = 0;
  let watingTime = 0;
  while (list.length || jobs.length) {
    while (jobs[0] && jobs[0][0] <= time) {
      const x = jobs.shift();
      list.push([x[1], x[0]]);
    }
    list.sort((a, b) => a[0] - b[0]);
    if (list.length) {
      const x = list.shift();
      lastTime = time + x[0];
      watingTime += lastTime - x[1];
      time = lastTime;
    } else {
      time = jobs[0][0];
    }
  }
  return Math.floor(watingTime / length);
}
