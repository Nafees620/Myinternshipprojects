<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <link rel="stylesheet" href="style.css">
  <title>Registration Form</title>
</head>
<body>
  <div class="container">
    <form id="registrationForm">
      <h2>Registration Form</h2>
      <div class="form-group">
        <label for="fullName">Full Name:</label>
        <input type="text" id="fullName" name="fullName" required>
      </div>
      <div class="form-group">
        <label for="email">Email:</label>
        <input type="email" id="email" name="email" required>
      </div>
      <div class="form-group">
        <label for="password">Password:</label>
        <input type="password" id="password" name="password" required>
      </div>
      <div class="form-group">
        <label for="confirmPassword">Confirm Password:</label>
        <input type="password" id="confirmPassword" name="confirmPassword" required>
      </div>
      <button type="submit">Register</button>
    </form>
  </div>
  <script src="script.js"></script>
</body>
</html>
body {
  font-family: 'Arial', sans-serif;
  background-color: #f4f4f4;
  margin: 0;
  display: flex;
  align-items: center;
  justify-content: center;
  height: 100vh;
}

.container {
  background-color: #fff;
  padding: 20px;
  border-radius: 8px;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

form {
  display: flex;
  flex-direction: column;
}

.form-group {
  margin-bottom: 15px;
}

label {
  margin-bottom: 5px;
}

input {
  padding: 8px;
  border: 1px solid #ccc;
  border-radius: 4px;
  width: 100%;
}

button {
  background-color: #4caf50;
  color: #fff;
  padding: 10px;
  border: none;
  border-radius: 4px;
  cursor: pointer;
}

button:hover {
  background-color: #45a049;
}
document.getElementById("registrationForm").addEventListener("submit", function(event) {
  event.preventDefault();

  var fullName = document.getElementById("fullName").value;
  var email = document.getElementById("email").value;
  var password = document.getElementById("password").value;
  var confirmPassword = document.getElementById("confirmPassword").value;

  if (password !== confirmPassword) {
    alert("Passwords do not match");
    return;
  }

  alert("Registration successful!\n\nFull Name: " + fullName + "\nEmail: " + email);
});

