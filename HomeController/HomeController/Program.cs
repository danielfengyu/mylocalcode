using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using MySql.Data.MySqlClient;
namespace HomeController
{
    static class HomeContrller
    {
         public ActionResult Index()
        {

            String myInfo = "欢迎使用 ASP.NET MVC! ";

            ///////////////////获取MYSQ看数据返回值////////////////////////////
            MySqlConnection myconn = null;
            MySqlCommand  mycom = null;
            MySqlDataReader myrec = null;

            //连接字符串拼装
            myconn = new MySqlConnection("Host = localhost;Database = test;Username = root;Password = dayingfengyu");

            //连接
            myconn.Open();

            if(myconn.State.ToString()=="Open")
            {
                myInfo = myInfo + "<br> 连接MYSQL成功";
            }
            
            //查询命令赋值，可以写多条语句，多条语句之间用;号隔开
            mycom = new MySqlCommand("select * from persioninfo",myconn);

            myrec = mycom.ExecuteReader();

            //一次次读，读不到就结束
            while (myrec.Read())
            {
                myInfo = myInfo + myrec["name"] + " " + myrec["sex"];
            }

            //////关闭相关对象
            myrec.Close();
            myconn.Close();

            /////////////////////获取MYSQ看数据返回值////////////////////////////

             ViewData["Message"] = myInfo;

            return View();
        }

        public ActionResult About()
        {
            return View();
        }
    }
}
