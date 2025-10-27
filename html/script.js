let mood = "";

function selectMood(selectedMood) {
  mood = selectedMood;
  document.getElementById("step1").classList.add("hidden");
  document.getElementById("step2").classList.remove("hidden");
}

function nextStep() {
  document.getElementById("step2").classList.add("hidden");
  document.getElementById("step3").classList.remove("hidden");
}

function generateDiary() {
  const reason = document.getElementById("reason").value.trim();
  const checked = document.querySelectorAll('input[type="checkbox"]:checked');
  const harvests = Array.from(checked).map(c => c.value);
  
  let diary = `今天我感到${mood}。`;
  if (reason) diary += `因为${reason}。`;
  if (harvests.length > 0) diary += `今天的收获有：${harvests.join("、")}。`;
  diary += "希望明天也能有新的小惊喜～ 🌷";

  document.getElementById("step3").classList.add("hidden");
  document.getElementById("result").classList.remove("hidden");
  document.getElementById("diaryText").innerText = diary;
}

function restart() {
  document.querySelectorAll("input[type='checkbox']").forEach(c => c.checked = false);
  document.getElementById("reason").value = "";
  document.getElementById("result").classList.add("hidden");
  document.getElementById("step1").classList.remove("hidden");
}
