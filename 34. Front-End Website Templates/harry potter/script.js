const cursor = document.querySelector('.cursor');
const container = document.querySelector('.container')
document.addEventListener('mousemove', e => {
    cursor.setAttribute("style", "top: " + (e.pageY - 10) + "px; left: " + (e.pageX - 10) + "px;")
})

document.addEventListener('click', () => {
    cursor.classList.add("expand");

    setTimeout(() => {
        cursor.classList.remove("expand");
    }, 500)
})

// document.querySelector(".wrong").addEventListener("click",  () => {
//     document.querySelectorAll('.words').addEventListener("click",() => {
//     container.classList.remove(".container");
//     document.getElementById("word-1").classList.add("word-1");
//     document.getElementById("word-2").classList.add("word-2");
//     document.getElementById("word-3").classList.add("word-3");
//     });
// });
const continu = document.querySelector('.continu');
document.querySelector(".wrong").addEventListener("click", function () {
    container.classList.add('inactive');
    continu.classList.add('show-continue');
});
