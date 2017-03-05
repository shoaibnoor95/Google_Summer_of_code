/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package connectivity;

import com.healthmarketscience.jackcess.Database;
import com.healthmarketscience.jackcess.DatabaseBuilder;
import java.io.File;
import java.io.IOException;
import net.ucanaccess.jdbc.JackcessOpenerInterface;
import com.healthmarketscience.jackcess.CryptCodecProvider;
/**
 *
 * @author Shoaib
 */

public class CryptCodecOpener implements JackcessOpenerInterface {
         @Override
    public Database open(File fl,String pwd) throws IOException {
       DatabaseBuilder dbd =new DatabaseBuilder(fl);
       dbd.setAutoSync(false);
       dbd.setCodecProvider(new CryptCodecProvider(pwd));
       dbd.setReadOnly(false);
       return dbd.open();
    }
}
