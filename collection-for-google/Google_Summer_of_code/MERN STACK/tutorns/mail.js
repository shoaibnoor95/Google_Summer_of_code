app.get('/mail', mailSend)
function mailSend(req, res) {
    handleSayHello(req, res);
    function handleSayHello(req, res) {
        // create reusable transporter object using the default SMTP transport
        var transporter = nodemailer.createTransport({
            service: 'gmail',
            auth: {
                user: 'shoaib.1995.noor@gmail.com', // Your email id
                pass: 'n0kia670' // Your password
            }
        });
        // var text = 'Hello your reservation confirmed. Your Slot Number is' + req.headers.slotno + ' \n\n' + req.headers.from;
        var text = 'User submited information:' + ' \n' + 'Name:';
        var mailOptions = {
            from: 'no-reply@tola.com', // sender address
            to: 'shoaibnoor95@hotmail.com', // list of receivers
            subject: 'Your respective user email', // Subject line
            text: text // plaintext body
        };
        transporter.sendMail(mailOptions, function (err, info) {
            if (err) {
                console.log(err.message+""+err.name);
                res.json({ Err: err.message });
            } else {
                console.log('Message sent: ' + info.response);
                res.json({ Success: info.response });
            };
        });
    }
}