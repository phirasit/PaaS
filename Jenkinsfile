node {
    def app
    
    stage('Clone repository') {
        checkout scm
    }

    stage('Build program') {
        sh './buildscript.sh'
    }

    stage('Test program') {
        sh './test.sh'
    }

    stage('Build image') {
        app = docker.build('phirasit/paas')
    }

    stage('Push image') {

        docker.withRegistry('https://registry.hub.docker.com', 'docker-hub-credentials') {
            app.push("${env.BUILD_NUMBER}")
            app.push("latest")
        }
    }
}
